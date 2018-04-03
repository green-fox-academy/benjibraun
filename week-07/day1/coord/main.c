#include <stdio.h>
#include <stdlib.h>

// Create a struct to store coordinates (for example: int x and int y)
// Create an array which can store coordinates, do not create multidimensonal arrays here
// Fill up the coordinates in the array with random number.

typedef struct{
    int x;
    int y;
}coordinate;

int main()
{
    coordinate coordinates [50];
    for (int i=0;i<50;i++)
    {
        coordinates[i].x=i+2*4;
        printf("x%d  =  %d\t",i,coordinates[i].x);
        coordinates[i].y=i+8*2;
        printf("y%d =  %d\n",i,coordinates[i].y);
    }

    return 0;
}
