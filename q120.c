#include <stdio.h>

int main() {
    char s[300];
    int i = 0;

    scanf("%[^\n]", s);

    if (s[0] >= 'a' && s[0] <= 'z')
        s[0] = s[0] - 32;

    for (i = 1; s[i] != '\0'; i++) {
        if (s[i-1] == '.' || s[i-1] == '?' || s[i-1] == '!') {
            if (s[i] == ' ' && s[i+1] >= 'a' && s[i+1] <= 'z')
                s[i+1] = s[i+1] - 32;
        }
    }

    printf("%s", s);
    return 0;
}
