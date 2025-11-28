#include <stdio.h>

int main() {
    char s[200];
    int i, j;

    scanf("%[^\n]", s);

    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            for (j = i + 1; s[j] != '\0'; j++) {
                if (s[i] == s[j]) {
                    printf("%c", s[i]);
                    return 0;
                }
            }
        }
    }

    printf("No repeating lowercase letter");
    return 0;
}
