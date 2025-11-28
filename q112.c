#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);

    int arr[n];
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int max_end = arr[0];
    int max_sum = arr[0];

    for (i = 1; i < n; i++) {
        if (max_end + arr[i] < arr[i])
            max_end = arr[i];
        else
            max_end = max_end + arr[i];

        if (max_end > max_sum)
            max_sum = max_end;
    }

    printf("%d", max_sum);
    return 0;
}
