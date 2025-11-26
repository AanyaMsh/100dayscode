#include <stdio.h>

int main() {
    int n, i, k;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n], temp[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter k (positions to rotate): ");
    scanf("%d", &k);

    k = k % n;   // important to handle large k

    // Copy last k elements to front of temp
    int index = 0;
    for (i = n - k; i < n; i++) {
        temp[index++] = arr[i];
    }

    // Copy remaining elements
    for (i = 0; i < n - k; i++) {
        temp[index++] = arr[i];
    }

    // Copy back to original array
    for (i = 0; i < n; i++) {
        arr[i] = temp[i];
    }

    printf("Array after right rotation:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
