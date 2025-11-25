#include <stdio.h>

int main() {
    int n, i, j, isPrime;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d:\n", n);

    for (i = 2; i <= n; i++) {   // start from 2
        isPrime = 1;             // assume prime

        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                isPrime = 0;     // not prime
                break;
            }
        }

        if (isPrime == 1)
            printf("%d ", i);
    }

    return 0;
}
