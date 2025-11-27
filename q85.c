#include <stdio.h>

int main() {
    char str[100];
    int i = 0, j, temp;

    printf("Enter a string: ");
    gets(str);

    // Find length
    while (str[i] != '\0') {
        i++;
    }
    j = i - 1;   // last index
    i = 0;       // first index

    // Reverse using swapping
    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }

    printf("Reversed string: %s", str);

    return 0;
}
