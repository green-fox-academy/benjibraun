#include <stdio.h>
#include <stdlib.h>
//Create a function that takes an array of integers and returns the average of the even numbers from that array

float get_average_of_even(int[],int);

int main()
{
    int length;

    printf("Please enter the length of the array :");
    scanf("%d", &length);

    int nums[length];

    for(int i = 0; i < length; i++){
        printf("%d.= ", i+1);
        scanf("%d", &nums[i]);
    }

    printf("average of the even numbers = %0.2f",get_average_of_even(nums,length));

    return 0;

}
float get_average_of_even(int array_of_num [],int length)
{

    float sum_of_even = 0;
    float num_of_even = 0;

    for(int i=0; i< length;i++){
        if (array_of_num [i]%2 == 0){
            sum_of_even += array_of_num[i];
            num_of_even++;
        }
    }

    if (num_of_even == 0){
       return num_of_even;
    }
    return sum_of_even/num_of_even;

}
