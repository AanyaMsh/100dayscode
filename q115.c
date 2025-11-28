#include <stdio.h>

int main() {
    char s[200], t[200];
    int i, freq1[26]={0}, freq2[26]={0};

    scanf("%s", s);
    scanf("%s", t);

    for (i = 0; s[i] != '\0'; i++)
        freq1[s[i] - 'a']++;

    for (i = 0; t[i] != '\0'; i++)
        freq2[t[i] - 'a']++;

    for (i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) {
            printf("Not Anagram");
            return 0;
        }
    }

    printf("Anagram");
    return 0;
}
