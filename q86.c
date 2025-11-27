#include <stdio.h>

int main() {
    char str[100];
    int i = 0, j, isPalindrome = 1;

    printf("Enter a string: ");
    gets(str);

    // Find length
    while (str[i] != '\0') {
        i++;
    }
    j = i - 1;  // last index
    i = 0;      // first index

    // Compare characters
    while (i < j) {
        if (str[i] != str[j]) {
            isPalindrome = 0;
            break;
        }
        i++;
        j--;
    }

    if (isPalindrome)
        printf("String is a Palindrome");
    else
        printf("String is NOT a Palindrome");

    return 0;
}
