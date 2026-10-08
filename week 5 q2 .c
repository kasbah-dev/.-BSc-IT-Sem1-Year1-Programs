#include <stdio.h>

// Returns the total fare at KSh. 50 per kilometer
double calculateFare(double distance) {
    return distance * 50.0;
}

int main(void) {
    double distance;

    printf("Enter distance traveled (km): ");
    scanf("%lf", &distance);

    printf("Total fare: KSh. %.2f\n", calculateFare(distance));
    return 0;
}