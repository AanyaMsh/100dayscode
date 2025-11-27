#include <stdio.h>

int main() {
    int n, i, j, symmetric = 1;

    printf("Enter size of square matrix (n x n): ");
    scanf("%d", &n);

    int a[n][n];

    printf("Enter elements of matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Check symmetry
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (a[i][j] != a[j][i]) {
                symmetric = 0;
                break;
            }
        }
        if (symmetric == 0) break;
    }

    if (symmetric == 1)
        printf("Matrix is Symmetric");
    else
        printf("Matrix is NOT Symmetric");

    return 0;
}
