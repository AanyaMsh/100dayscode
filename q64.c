#include <stdio.h>

int main() {
    int n, digit;
    int freq[10] = {0};   // frequency of digits 0–9

    printf("Enter a number: ");
    scanf("%d", &n);

    // Count digits
    int temp = n;
    while (temp > 0) {
        digit = temp % 10;
        freq[digit]++;
        temp = temp / 10;
    }

    int maxDigit = 0, maxFreq = freq[0];

    // Find digit with highest frequency
    for (int i = 1; i < 10; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            maxDigit = i;
        }
    }

    printf("Digit occurring the most times = %d\n", maxDigit);
    printf("It occurs %d times.", maxFreq);

    return 0;
}
