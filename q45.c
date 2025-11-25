#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        float num = 2 * i;       
        float den = 4 * i - 1;    

        sum = sum + (num / den);
    }

    printf("Sum = %.2f", sum);

    return 0;
}
