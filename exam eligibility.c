#include <stdio.h>

int main(void) {
    float attendance, averageMarks;

    printf("Enter attendance (%%): ");
    scanf("%f", &attendance);
    printf("Enter average marks: ");
    scanf("%f", &averageMarks);

    if (attendance >= 75 && averageMarks >= 40) {
        printf("Eligible\n");
    } else {
        printf("Not eligible\n");
    }
    return 0;
}