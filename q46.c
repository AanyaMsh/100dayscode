#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 5; i++) {        // outer loop → rows
        for (j = 1; j <= 5; j++) {    // inner loop → columns
            printf("*");
        }
        printf("\n");                 // new line after each row
    }

    return 0;
}
