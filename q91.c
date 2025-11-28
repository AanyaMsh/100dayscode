#include <stdio.h>

int main() {
    char s[200], res[200];
    int i = 0, j = 0;

    scanf("%[^\n]", s);

    while (s[i] != '\0') {
        if (!(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' ||
              s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')) {
            res[j] = s[i];
            j = j + 1;
        }
        i = i + 1;
    }

    res[j] = '\0';

    printf("%s", res);
    return 0;
}
