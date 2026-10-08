#include <stdio.h>

// Converts Fahrenheit to Celsius using C = (F - 32) * 5/9
double convertToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

int main(void) {
    double fahrenheit;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%lf", &fahrenheit);

    printf("Temperature in Celsius: %.1f\n", convertToCelsius(fahrenheit));
    return 0;
}