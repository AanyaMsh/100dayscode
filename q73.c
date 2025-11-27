#include <stdio.h>

int main() {
    int r, c, i, j;

    printf("Enter rows: ");
    scanf("%d", &r);

    printf("Enter columns: ");
    scanf("%d", &c);

    int a[r][c], rowSum[r];

    printf("Enter %d elements:\n", r * c);
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Calculate row-wise sum
    for (i = 0; i < r; i++) {
        rowSum[i] = 0;
        for (j = 0; j < c; j++) {
            rowSum[i] += a[i][j];
        }
    }

    // Print row sums
    printf("Row-wise sums:\n");
    for (i = 0; i < r; i++) {
        printf("Row %d sum = %d\n", i+1, rowSum[i]);
    }

    return 0;
}
