#include <stdio.h>

// Returns the total electric bill for the units consumed
double calculateElectricBill(int units) {
    double bill;

    if (units <= 100) {
        bill = units * 10.0;                              // first 100 units @ 10
    } else if (units <= 200) {
        bill = 100 * 10.0 + (units - 100) * 15.0;         // next 100 units @ 15
    } else {
        bill = 100 * 10.0 + 100 * 15.0 + (units - 200) * 20.0;  // above 200 @ 20
    }
    return bill;
}

int main(void) {
    int units;

    printf("Enter units consumed: ");
    scanf("%d", &units);

    printf("Total bill: KSh. %.2f\n", calculateElectricBill(units));
    return 0;
}