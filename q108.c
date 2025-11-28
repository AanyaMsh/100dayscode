#include <stdio.h>

int main() {
    int n, i, j, prod;

    scanf("%d", &n);
    int a[n], ans[n];

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++) {
        prod = 1;
        for (j = 0; j < n; j++) {
            if (i != j)
                prod *= a[j];
        }
        ans[i] = prod;
    }

    for (i = 0; i < n; i++)
        printf("%d ", ans[i]);

    return 0;
}
