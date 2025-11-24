#include <stdio.h>

int main() {
    int n, i;
    int product = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        if(i % 2 == 0) {
            product = product * i;
        }
    }

    printf("Product of even numbers up to %d is %d", n, product);

    return 0;
}
