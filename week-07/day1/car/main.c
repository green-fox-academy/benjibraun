#include <stdio.h>

// Write a function that takes a car as an argument and prints all it's stats
// If the car is a Tesla it should not print it's gas level

typedef enum{VOLVO, TOYOTA, LAND_ROVER, TESLA}car_type;

typedef struct{
	car_type type;
	double km;
	double gas;
}car;
void print_stats(car car);
int main()
{
    car volovo={VOLVO,35247.5,45.2};
    car tesla={TESLA,19438.4};
    print_stats(volovo);
    print_stats(tesla);
	return 0;
}
void print_stats(car car)
{
    if(car.type==TESLA)
    {
        printf("%d %.1f\n",car.type,car.km);
    }
    else
    {
        printf("%d %.1f %.1f\n",car.type,car.km,car.gas);
    }
}
