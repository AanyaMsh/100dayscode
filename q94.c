#include <stdio.h>

int main() {
    char s[300], longest[100], temp[100];
    int i=0, j=0, max = 0, k;

    scanf("%[^\n]", s);

    while (1) {
        if (s[i] != ' ' && s[i] != '\0') {
            temp[j] = s[i];
            j++;
        } else {
            temp[j] = '\0';
            if (j > max) {
                max = j;
                for (k = 0; k <= j; k++)
                    longest[k] = temp[k];
            }
            j = 0;
        }
        if (s[i] == '\0') break;
        i++;
    }

    printf("Longest word: %s", longest);
    return 0;
}
