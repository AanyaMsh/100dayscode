#include <stdio.h>

int main() {
    int r, c, i, j, sum = 0;

    printf("Enter rows: ");
    scanf("%d", &r);

    printf("Enter columns: ");
    scanf("%d", &c);

    int a[r][c];

    printf("Enter %d elements:\n", r * c);
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            sum += a[i][j];
        }
    }

    printf("Sum of all elements = %d", sum);

    return 0;
}
