#include <stdio.h>

int main() {
    int n, digit;
    int rev = 0, complement = 0;

    printf("Enter a binary number: ");
    scanf("%d", &n);

    while (n > 0) {
        digit = n % 10;       

        if (digit == 0)
            rev = rev * 10 + 1;   
        else
            rev = rev * 10 + 0;   

        n = n / 10;          
    }

    while (rev > 0) {
        complement = complement * 10 + (rev % 10);
        rev = rev / 10;
    }

    printf("1's Complement = %d", complement);

    return 0;
}
