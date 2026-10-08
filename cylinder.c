#include <stdio.h>
#define pi 3.142

int main()
{
    double r, h, volume, surfaceArea;

    printf("enter the radius of the cylinder:");
    scanf("%lf", &r);
    printf("enter the height of the cylinder:");
    scanf("%lf", &h);

    volume = pi * r * r * h;
    surfaceArea = 2 * pi * r * r + 2 * pi * r * h;

    printf("volume=%.2lf\n", volume);
    printf("surfaceArea=%.2lf\n", surfaceArea);
    return 0;
}