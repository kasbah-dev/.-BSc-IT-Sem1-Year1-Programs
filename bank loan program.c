#include <stdio.h>

int main(void) {
    int age;
    double income;

    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your annual income (Sh): ");
    scanf("%lf", &income);

    // Must be 21 or over AND earn at least Sh21,000
    if (age >= 21 && income >= 21000) {
        printf("Congratulations you qualify for a loan.\n");
    } else {
        printf("Unfortunately, we are unable to offer you a loan at this time.\n");
    }
    return 0;
}