#include <stdio.h>
#include <string.h>

int main(void) {
    char password[50];

    do {
        printf("Enter password: ");
        scanf("%49s", password);
    } while (strcmp(password, "1234") != 0);

    printf("Access Granted\n");
    return 0;
}