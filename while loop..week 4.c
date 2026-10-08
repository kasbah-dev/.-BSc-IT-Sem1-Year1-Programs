#include <stdio.h>

int main(void) {
    double balance, amount;

    printf("Enter your starting account balance: ");
    scanf("%lf", &balance);

    // Keep allowing withdrawals while balance is above zero
    while (balance > 0) {
        printf("Enter amount to withdraw: ");
        scanf("%lf", &amount);

        balance -= amount;
        printf("Balance after withdrawal: %.2f\n", balance);
    }

    printf("Balance is zero or negative. No more withdrawals allowed.\n");
    return 0;
}