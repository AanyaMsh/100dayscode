#include <stdio.h>

int main() {
    int n, i, value, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n + 1];  // one extra space for new element

    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter value to insert: ");
    scanf("%d", &value);

    // Find position to insert
    pos = n;
    for (i = 0; i < n; i++) {
        if (value < arr[i]) {
            pos = i;
            break;
        }
    }

    // Shift elements to right
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the element
    arr[pos] = value;

    printf("Array after insertion:\n");
    for (i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
