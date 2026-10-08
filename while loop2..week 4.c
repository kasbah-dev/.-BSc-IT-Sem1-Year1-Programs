#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int secret, guess, attempts = 0;

    srand((unsigned) time(NULL));
    secret = rand() % 20 + 1;   // random number 1 to 20

    printf("Guess the number between 1 and 20!\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > secret) {
            printf("Too high!\n");
        } else if (guess < secret) {
            printf("Too low!\n");
        } else {
            printf("Congratulations!\n");
        }
    } while (guess != secret);

    printf("You guessed it in %d attempt(s).\n", attempts);
    return 0;
}