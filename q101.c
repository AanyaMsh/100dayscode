#include <stdio.h>

int main() {
    int n, i, target;
    int first = -1, last = -1;

    printf("Enter size: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter sorted array:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter target: ");
    scanf("%d", &target);

    for (i = 0; i < n; i++) {
        if (a[i] == target) {
            if (first == -1)
                first = i;
            last = i;
        }
    }

    printf("%d %d", first, last);
    return 0;
}
