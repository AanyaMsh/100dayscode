#include <stdio.h>

int main() {
    int n, revBinary = 0, binary = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    int temp = n;

    while(temp > 0) {
        revBinary = revBinary * 10 + (temp % 2);
        temp = temp / 2;
    }

    while(revBinary > 0) {
        binary = binary * 10 + (revBinary % 10);
        revBinary = revBinary / 10;
    }

    printf("Binary = %d", binary);

    return 0;
}
