#include <stdio.h>
#include <stdlib.h>
#include "pi.h"
#define PI 3.14
// define a variable called PI with the value of 3.14
// create a function which takes the radius of a circle as a parameter
// and return the area of that cirle
// area = radius * radius * PI
/*
    Organise the function from the previous excercise to separate .c and .h files
    Create another function which calculates the circumference of a circle
    the radius of the circle should be passed as a parameter
    the function should return the calculated circumference
    circumference = 2 * radius * PI
    this function should be in the same .c and .h files as the one which calculates the area
*/

int main(){
    float radius;
    printf("radius(in cm)=", area(radius));
    scanf("%f" , &radius);
    printf("Area = %fcm2\n", area(radius));
    printf("circumference = %fcm\n", circumference(radius));
    return 0;
}

float area (float radius){
    return PI*(radius*radius);
}
float circumference (float radius){

    return (2 * radius) * PI;
}
