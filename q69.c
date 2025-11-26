#include <stdio.h>

int main() {
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int second = -999999;  // very small number

    // Find largest
    for (i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }

    // Find second largest
    for (i = 0; i < n; i++) {
        if (arr[i] != max && arr[i] > second)
            second = arr[i];
    }

    printf("Second largest element = %d", second);

    return 0;
}
