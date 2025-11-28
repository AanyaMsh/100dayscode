#include <stdio.h>

int main() {
    int n, x, i, index = -1;

    scanf("%d", &n);
    int a[n];

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &x);

    for (i = 0; i < n; i++) {
        if (a[i] >= x) {
            index = i;
            break;
        }
    }

    printf("%d", index);
    return 0;
}
