#include <stdio.h>

int main(void) {
    double revenue[7];      // daily revenue for 7 days
    double total = 0, average;
    int i;

    // Input revenue for each day
    for (i = 0; i < 7; i++) {
        printf("Enter revenue for day %d: ", i + 1);
        scanf("%lf", &revenue[i]);
        total += revenue[i];
    }

    average = total / 7;

    printf("\nTotal weekly revenue  : %.2f\n", total);
    printf("Average daily revenue : %.2f\n", average);
    return 0;
}