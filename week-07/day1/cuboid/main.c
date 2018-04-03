#include <stdio.h>

// Write a function called "GetSurface" that takes a RectangularCuboid
// and returns it's surface
// Write a function called "GetVolume" that takes a RectangularCuboid
// and returns it's volume

typedef struct{
    double a;
    double b;
    double c;
}rectangular_cuboid;

double GetSurface(rectangular_cuboid);
double GetVolume(rectangular_cuboid);

int main()
{
    rectangular_cuboid cubo;

    printf("Height(cm): ");
    scanf("%lf", &cubo.a);
    printf("Length(cm): ");
    scanf("%lf", &cubo.b);
    printf("Width(cm): ");
    scanf("%lf", &cubo.c);

    printf("Surface= %.2lf cm2\n",GetSurface(cubo));
    printf("Volume= %.2lf cm3\n",GetVolume(cubo));
    return 0;
}
double GetSurface(rectangular_cuboid cubo){
    return (cubo.a * cubo.b + cubo.c * cubo.b + cubo.c * cubo.a) * 2;
}
double GetVolume(rectangular_cuboid cubo){
    return cubo.a*cubo.b*cubo.c;
}
