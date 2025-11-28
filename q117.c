#include <stdio.h>

int main() {
    int m, n, i, j, temp;

    scanf("%d", &m);
    int a[m];
    for (i = 0; i < m; i++) scanf("%d", &a[i]);

    scanf("%d", &n);
    int b[n];
    for (i = 0; i < n; i++) scanf("%d", &b[i]);

    int c[m+n];
    for (i = 0; i < m; i++) c[i] = a[i];
    for (j = 0; j < n; j++) c[m+j] = b[j];

    for (i = 0; i < m+n; i++) {
        for (j = i+1; j < m+n; j++) {
            if (c[j] < c[i]) {
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }

    for (i = 0; i < m+n; i++) printf("%d ", c[i]);
    return 0;
}
