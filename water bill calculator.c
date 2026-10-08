#include <stdio.h>

int main(void) {
    int units;
    double bill;

    printf("Enter water units consumed: ");
    scanf("%d", &units);

    if (units < 0) {
        printf("Invalid units.\n");
        return 1;
    }

    if (units <= 30) {
        bill = units * 20.0;
    } else if (units <= 60) {
        bill = 30 * 20.0 + (units - 30) * 25.0;
    } else {
        bill = 30 * 20.0 + 30 * 25.0 + (units - 60) * 30.0;
    }

    printf("Total water bill: %.2f KES\n", bill);
    return 0;
}