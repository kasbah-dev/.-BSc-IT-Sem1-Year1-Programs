#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int chain[3][5][10];    // 3 branches, 5 floors, 10 rooms each
    int i, j, k;
    int totalOccupied = 0;

    srand((unsigned) time(NULL));

    // Assign random occupancy (1 or 0) to every room
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            for (k = 0; k < 10; k++) {
                chain[i][j][k] = rand() % 2;

                if (chain[i][j][k] == 1) {
                    totalOccupied++;
                }
            }
        }
    }

    printf("Total occupied rooms across all branches: %d\n", totalOccupied);
    printf("Total rooms in the chain: %d\n", 3 * 5 * 10);
    return 0;
}