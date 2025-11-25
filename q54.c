#include <stdio.h>

int main() {
    int i, j, s;

    // Top part
    for (i = 1; i <= 7; i += 2) {
        for (s = 1; s <= (7 - i) / 2; s++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Bottom part
    for (i = 5; i >= 1; i -= 2) {
        for (s = 1; s <= (7 - i) / 2; s++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
