#include <stdio.h>

int main() {
    char str[100], ch;
    int i = 0, freq = 0;

    printf("Enter a string: ");
    gets(str);

    printf("Enter character to find frequency: ");
    scanf("%c", &ch);

    while (str[i] != '\0') {
        if (str[i] == ch)
            freq++;
        i++;
    }

    printf("Frequency of '%c' = %d", ch, freq);

    return 0;
}
