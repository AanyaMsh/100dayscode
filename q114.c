#include <stdio.h>

int main() {
    char s[300];
    int i, j, k, found, len = 0;

    scanf("%[^\n]", s);

    for (i = 0; s[i] != '\0'; i++) {
        int freq[256] = {0};
        for (j = i; s[j] != '\0'; j++) {
            if (freq[(int)s[j]] == 1) break;
            freq[(int)s[j]] = 1;
        }
        if (j - i > len)
            len = j - i;
    }

    printf("%d", len);
    return 0;
}
