/**
 ******************************************************************************
 * @file    Templates/Src/main.c
 * @author  MCD Application Team
 * @version V1.0.3
 * @date    22-April-2016
 * @brief   STM32F7xx HAL API Template project
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; COPYRIGHT(c) 2016 STMicroelectronics</center></h2>
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *   1. Redistributions of source code must retain the above copyright notice,
 *      this list of conditions and the following disclaimer.
 *   2. Redistributions in binary form must reproduce the above copyright notice,
 *      this list of conditions and the following disclaimer in the documentation
 *      and/or other materials provided with the distribution.
 *   3. Neither the name of STMicroelectronics nor the names of its contributors
 *      may be used to endorse or promote products derived from this software
 *      without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 ******************************************************************************
 */

/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "stm32746g_discovery_lcd.h"
/** @addtogroup STM32F7xx_HAL_Examples
 * @{
 */

/** @addtogroup Templates
 * @{
 */

/* Private typedef -----------------------------------------------------------*/
typedef struct {
	uint32_t ovf;
	uint32_t prev;
	uint32_t last;
} input_capture_data_t;
TIM_HandleTypeDef TimHandle2;
TIM_HandleTypeDef TimHandle3;
GPIO_InitTypeDef gpio;
GPIO_InitTypeDef gpio2;
TIM_OC_InitTypeDef sConfig;
TIM_IC_InitTypeDef sICConfig;
UART_HandleTypeDef uart_handle;
ADC_HandleTypeDef AdcHandle;
ADC_ChannelConfTypeDef sADCConfig;
p_ctrler_t ctrler;
pi_ctrler_t ctrler_pi;
pi_ctrler_t ctrler_pid;
input_capture_data_t inputc;

/* Private define ------------------------------------------------------------*/
#define IC_PERIOD 65535
//#define USE_P_CTRLER

/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
int freq;
float T_period;
int steps;
int semp[10];
int avg;
int cnt = 0;
int avg_cnt = 0;
/* Private function prototypes -----------------------------------------------*/
static void SystemClock_Config(void);
static void Error_Handler(void);
static void MPU_Config(void);
static void CPU_CACHE_Enable(void);
void periphera_init(void);
void LCD_print();

/* Private functions ---------------------------------------------------------*/
/**
 * @brief  Main program
 * @param  None
 * @retval None
 */

uint16_t analog_read;

int main(void) {
	/* This project template calls firstly two functions in order to configure MPU feature
	 and to enable the CPU Cache, respectively MPU_Config() and CPU_CACHE_Enable().
	 These functions are provided as template implementation that User may integrate
	 in his application, to enhance the performance in case of use of AXI interface
	 with several masters. */

	/* Configure the MPU attributes as Write Through */
	MPU_Config();

	/* Enable the CPU Cache */
	CPU_CACHE_Enable();

	/* STM32F7xx HAL library initialization:
	 - Configure the Flash ART accelerator on ITCM interface
	 - Configure the Systick to generate an interrupt each 1 msec
	 - Set NVIC Group Priority to 4
	 - Low Level Initialization
	 */
	HAL_Init();

	/* Configure the System clock to have a frequency of 216 MHz */
	SystemClock_Config();

	/* Add your application code here */
	periphera_init();

	int8_t cntr = 0;
	TIM3->CCR1 = 50;
	inputc.last = 0;
	inputc.ovf = 0;
	inputc.prev = 0;
	p_init(&ctrler);
	pi_init(&ctrler_pi);
	//pid_init(&ctrler_pid);
	for (int i = 0; i < 10; i++) {
		semp[i] = -1;
	}

	/* Infinite loop */
	while (1) {
		//HAL_ADC_Start(&AdcHandle);
		avg = 0;
		avg_cnt = 0;
		if (HAL_ADC_PollForConversion(&AdcHandle, 10) == HAL_OK) {
			// ADC conversion completed
			analog_read = HAL_ADC_GetValue(&AdcHandle) / 40.95;
			if (cnt == 9) {
				semp[cnt] = analog_read;
				cnt = 0;
			} else {
				semp[cnt] = analog_read;
				cnt++;
			}
			for (int i = 0; i < 10; i++) {
				if (semp[i] != -1) {
				avg += semp[i];
				avg_cnt++;
			}
			avg = avg/2;
			TIM3->CCR1 = avg;
		}
	}
	cntr++;

	LCD_print();
	ctrler_pi.sense = freq / 4;
	//TIM3->CCR1 = (int) pi_control(&ctrler_pi);
	HAL_Delay(10);
}
}

void LCD_print() {
char buff[100];

sprintf(buff, "%d", TIM3->CCR1);
BSP_LCD_ClearStringLine(0);
BSP_LCD_DisplayStringAtLine(0, (uint8_t *) buff);

sprintf(buff, "%d", avg);
BSP_LCD_ClearStringLine(1);
BSP_LCD_DisplayStringAtLine(1, (uint8_t *) buff);

sprintf(buff, "%d", avg_cnt);
BSP_LCD_ClearStringLine(2);
BSP_LCD_DisplayStringAtLine(2, (uint8_t *) buff);

sprintf(buff, "%d", freq);
BSP_LCD_ClearStringLine(3);
BSP_LCD_DisplayStringAtLine(3, (uint8_t *) buff);
HAL_Delay(100);
}

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim) {
inputc.ovf++;
}
void HAL_TIM_IC_CaptureCallback(TIM_HandleTypeDef *htim) {
char buff[100];
inputc.prev = inputc.last;
inputc.last = HAL_TIM_ReadCapturedValue(htim, TIM_CHANNEL_1);
steps = (65535 * inputc.ovf) + inputc.last - inputc.prev;
T_period = (float) ((inputc.ovf * IC_PERIOD + inputc.last - inputc.prev) * 0.001);
freq = (1 / T_period) * 1000;
inputc.ovf = 0;
//BSP_LED_Toggle(LED_GREEN);
}

void HAL_ADC_ConvCpltCallback(ADC_HandleTypeDef* AdcHandle) {
/* Turn LED1 on: Transfer process is correct */
BSP_LED_On(LED1);
}

void periphera_init(void) {
BSP_LCD_Init();
BSP_LCD_LayerDefaultInit(0, LCD_FB_START_ADDRESS);
BSP_LCD_SelectLayer(0);
BSP_LCD_DisplayOn();
BSP_LCD_Clear(LCD_COLOR_BLACK);
BSP_LED_Init(LED_GREEN);

/* time + PWM config */

__HAL_RCC_TIM2_CLK_ENABLE()
;
__HAL_RCC_TIM3_CLK_ENABLE()
;
__HAL_RCC_GPIOA_CLK_ENABLE()
;
__HAL_RCC_GPIOB_CLK_ENABLE()
;
__HAL_RCC_ADC3_CLK_ENABLE()
;

uart_handle.Init.BaudRate = 115200;
uart_handle.Init.WordLength = UART_WORDLENGTH_8B;
uart_handle.Init.StopBits = UART_STOPBITS_1;
uart_handle.Init.Parity = UART_PARITY_NONE;
uart_handle.Init.HwFlowCtl = UART_HWCONTROL_NONE;
uart_handle.Init.Mode = UART_MODE_TX_RX;
BSP_COM_Init(COM1, &uart_handle);

TimHandle2.Instance = TIM2;
TimHandle2.Init.Period = 65535;
TimHandle2.Init.Prescaler = 54;
TimHandle2.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
TimHandle2.Init.CounterMode = TIM_COUNTERMODE_UP;
TimHandle2.State = HAL_TIM_STATE_RESET;
TimHandle2.Channel = HAL_TIM_ACTIVE_CHANNEL_1 && HAL_TIM_ACTIVE_CHANNEL_2;
TimHandle2.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_DISABLE;

sICConfig.ICPolarity = TIM_ICPOLARITY_RISING;
sICConfig.ICSelection = TIM_ICSELECTION_DIRECTTI;
sICConfig.ICPrescaler = TIM_ICPSC_DIV1;
sICConfig.ICFilter = 0;

TimHandle3.Instance = TIM3;
TimHandle3.Init.Period = 100;
TimHandle3.Init.Prescaler = 1;
TimHandle3.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
TimHandle3.Init.CounterMode = TIM_COUNTERMODE_UP;

HAL_TIM_Base_Init(&TimHandle3);
HAL_TIM_Base_Start(&TimHandle3);

HAL_TIM_Base_Init(&TimHandle2);
HAL_TIM_IC_Init(&TimHandle2);
HAL_TIM_IC_ConfigChannel(&TimHandle2, &sICConfig, TIM_CHANNEL_1);

HAL_NVIC_EnableIRQ(TIM2_IRQn);
HAL_NVIC_SetPriority(TIM2_IRQn, 0x0F, 0x00);

HAL_TIM_Base_Start_IT(&TimHandle2);
HAL_TIM_IC_Start_IT(&TimHandle2, TIM_CHANNEL_1);

sConfig.OCMode = TIM_OCMODE_PWM1;
sConfig.Pulse = 100 / 2;
sConfig.OCPolarity = TIM_OCPOLARITY_HIGH;
sConfig.OCFastMode = TIM_OCFAST_DISABLE;
sConfig.OCNPolarity = TIM_OCNPOLARITY_HIGH;
sConfig.OCNIdleState = TIM_OCNIDLESTATE_RESET;
sConfig.OCIdleState = TIM_OCIDLESTATE_RESET;

HAL_TIM_PWM_ConfigChannel(&TimHandle3, &sConfig, TIM_CHANNEL_1);
HAL_TIM_PWM_Init(&TimHandle3);
HAL_TIM_PWM_Start(&TimHandle3, TIM_CHANNEL_1);

gpio.Mode = GPIO_MODE_AF_PP;
gpio.Pin = GPIO_PIN_4;
gpio.Pull = GPIO_NOPULL;
gpio.Speed = GPIO_SPEED_HIGH;
gpio.Alternate = GPIO_AF2_TIM3;
HAL_GPIO_Init(GPIOB, &gpio);

gpio.Mode = GPIO_MODE_AF_OD;
gpio.Pin = GPIO_PIN_15;
gpio.Pull = GPIO_NOPULL;
gpio.Speed = GPIO_SPEED_HIGH;
gpio.Alternate = GPIO_AF1_TIM2;
HAL_GPIO_Init(GPIOA, &gpio);

gpio2.Mode = GPIO_MODE_ANALOG;
gpio2.Pin = GPIO_PIN_0;
gpio2.Pull = GPIO_NOPULL;
gpio2.Speed = GPIO_SPEED_HIGH;

HAL_GPIO_Init(GPIOA, &gpio2);

AdcHandle.Instance = ADC3;
AdcHandle.Init.ClockPrescaler = ADC_CLOCKPRESCALER_PCLK_DIV4;
AdcHandle.Init.Resolution = ADC_RESOLUTION_12B;
AdcHandle.Init.ScanConvMode = DISABLE;                       // Sequencer disabled (ADC conversion on only 1 channel: channel set on rank 1)
AdcHandle.Init.ContinuousConvMode = ENABLE;                       // Continuous mode enabled to have continuous conversion
AdcHandle.Init.DiscontinuousConvMode = DISABLE;                       // Parameter discarded because sequencer is disabled
AdcHandle.Init.NbrOfDiscConversion = 0;
AdcHandle.Init.ExternalTrigConvEdge = ADC_EXTERNALTRIGCONVEDGE_NONE; // Conversion start trigged at each external event
AdcHandle.Init.ExternalTrigConv = ADC_EXTERNALTRIGCONV_T1_CC1;
AdcHandle.Init.DataAlign = ADC_DATAALIGN_RIGHT;
AdcHandle.Init.NbrOfConversion = 1;
AdcHandle.Init.DMAContinuousRequests = DISABLE;
AdcHandle.Init.EOCSelection = DISABLE;

HAL_ADC_Init(&AdcHandle);

sADCConfig.Channel = ADC_CHANNEL_0;
sADCConfig.Rank = 1;
sADCConfig.SamplingTime = ADC_SAMPLETIME_3CYCLES;
sADCConfig.Offset = 0;

HAL_ADC_ConfigChannel(&AdcHandle, &sADCConfig);
HAL_ADC_Start(&AdcHandle);
}

/**
 * @brief  System Clock Configuration
 *         The system Clock is configured as follow :
 *            System Clock source            = PLL (HSE)
 *            SYSCLK(Hz)                     = 216000000
 *            HCLK(Hz)                       = 216000000
 *            AHB Prescaler                  = 1
 *            APB1 Prescaler                 = 4
 *            APB2 Prescaler                 = 2
 *            HSE Frequency(Hz)              = 25000000
 *            PLL_M                          = 25
 *            PLL_N                          = 432
 *            PLL_P                          = 2
 *            PLL_Q                          = 9
 *            VDD(V)                         = 3.3
 *            Main regulator output voltage  = Scale1 mode
 *            Flash Latency(WS)              = 7
 * @param  None
 * @retval None
 */
static void SystemClock_Config(void) {
RCC_ClkInitTypeDef RCC_ClkInitStruct;
RCC_OscInitTypeDef RCC_OscInitStruct;

/* Enable HSE Oscillator and activate PLL with HSE as source */
RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSE;
RCC_OscInitStruct.HSEState = RCC_HSE_ON;
RCC_OscInitStruct.HSIState = RCC_HSI_OFF;
RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSE;
RCC_OscInitStruct.PLL.PLLM = 25;
RCC_OscInitStruct.PLL.PLLN = 432;
RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2;
RCC_OscInitStruct.PLL.PLLQ = 9;
if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK) {
	Error_Handler();
}

/* activate the OverDrive to reach the 216 Mhz Frequency */
if (HAL_PWREx_EnableOverDrive() != HAL_OK) {
	Error_Handler();
}

/* Select PLL as system clock source and configure the HCLK, PCLK1 and PCLK2
 clocks dividers */
RCC_ClkInitStruct.ClockType = (RCC_CLOCKTYPE_SYSCLK | RCC_CLOCKTYPE_HCLK | RCC_CLOCKTYPE_PCLK1 | RCC_CLOCKTYPE_PCLK2);
RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV8;
RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV2;
if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_7) != HAL_OK) {
	Error_Handler();
}
}

/**
 * @brief  This function is executed in case of error occurrence.
 * @param  None
 * @retval None
 */
static void Error_Handler(void) {
/* User may add here some code to deal with this error */
while (1) {
}
}

/**
 * @brief  Configure the MPU attributes as Write Through for SRAM1/2.
 * @note   The Base Address is 0x20010000 since this memory interface is the AXI.
 *         The Region Size is 256KB, it is related to SRAM1 and SRAM2  memory size.
 * @param  None
 * @retval None
 */
static void MPU_Config(void) {
MPU_Region_InitTypeDef MPU_InitStruct;

/* Disable the MPU */
HAL_MPU_Disable();

/* Configure the MPU attributes as WT for SRAM */
MPU_InitStruct.Enable = MPU_REGION_ENABLE;
MPU_InitStruct.BaseAddress = 0x20010000;
MPU_InitStruct.Size = MPU_REGION_SIZE_256KB;
MPU_InitStruct.AccessPermission = MPU_REGION_FULL_ACCESS;
MPU_InitStruct.IsBufferable = MPU_ACCESS_NOT_BUFFERABLE;
MPU_InitStruct.IsCacheable = MPU_ACCESS_CACHEABLE;
MPU_InitStruct.IsShareable = MPU_ACCESS_SHAREABLE;
MPU_InitStruct.Number = MPU_REGION_NUMBER0;
MPU_InitStruct.TypeExtField = MPU_TEX_LEVEL0;
MPU_InitStruct.SubRegionDisable = 0x00;
MPU_InitStruct.DisableExec = MPU_INSTRUCTION_ACCESS_ENABLE;

HAL_MPU_ConfigRegion(&MPU_InitStruct);

/* Enable the MPU */
HAL_MPU_Enable(MPU_PRIVILEGED_DEFAULT);
}

/**
 * @brief  CPU L1-Cache enable.
 * @param  None
 * @retval None
 */
static void CPU_CACHE_Enable(void) {
/* Enable I-Cache */
SCB_EnableICache();

/* Enable D-Cache */
SCB_EnableDCache();
}

#ifdef  USE_FULL_ASSERT

/**
 * @brief  Reports the name of the source file and the source line number
 *         where the assert_param error has occurred.
 * @param  file: pointer to the source file name
 * @param  line: assert_param error line source number
 * @retval None
 */
void assert_failed(uint8_t* file, uint32_t line)
{
/* User can add his own implementation to report the file name and line number,
 ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */

/* Infinite loop */
while (1)
{
}
}
#endif

/**
 * @}
 */

/**
 * @}
 */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
