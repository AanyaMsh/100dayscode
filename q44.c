#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    int num = 1;  // numerator (odd numbers)
    int den = 1;  // denominator

    for (int i = 1; i <= n; i++) {
        sum = sum + (float)num / den;

        num = num + 2;   
        if (i == 1)
            den = 4;    
        else
            den = den + 2;  
    }

    printf("Sum = %.2f", sum);

    return 0;
}
