#include <stdio.h>

int main() {
    int i, j;

    // Increasing part (1, 3, 5, 7, 9)
    for (i = 1; i <= 9; i += 2) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Decreasing part (7, 5, 3, 1)
    for (i = 7; i >= 1; i -= 2) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
