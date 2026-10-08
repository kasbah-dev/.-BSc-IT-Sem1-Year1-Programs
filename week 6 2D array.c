#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int occupancy[5][10];   // 5 floors, 10 rooms each (1 = occupied, 0 = vacant)
    int i, j;

    srand((unsigned) time(NULL));

    // Simulate random occupancy data
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 10; j++) {
            occupancy[i][j] = rand() % 2;
        }
    }

    // Count occupied and vacant rooms on each floor
    printf("Room occupancy per floor:\n");
    for (i = 0; i < 5; i++) {
        int occupied = 0, vacant = 0;

        for (j = 0; j < 10; j++) {
            if (occupancy[i][j] == 1) {
                occupied++;
            } else {
                vacant++;
            }
        }
        printf("Floor %d: Occupied = %d, Vacant = %d\n", i + 1, occupied, vacant);
    }
    return 0;
}