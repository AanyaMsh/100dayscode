#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    int a[n][n];

    printf("Enter matrix elements:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Main diagonal
    printf("Main Diagonal: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i][i]);
    }

    // Secondary diagonal
    printf("\nSecondary Diagonal: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i][n - 1 - i]);
    }

    return 0;
}
