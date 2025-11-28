#include <stdio.h>

int main() {
    char a[200], b[200];
    int i, j, countA = 0, countB = 0;

    scanf("%[^\n]", a);
    getchar();  // to clear newline
    scanf("%[^\n]", b);

    int freqA[256] = {0};
    int freqB[256] = {0};

    for (i = 0; a[i] != '\0'; i++)
        freqA[(int)a[i]]++;

    for (i = 0; b[i] != '\0'; i++)
        freqB[(int)b[i]]++;

    for (i = 0; i < 256; i++) {
        if (freqA[i] != freqB[i]) {
            printf("Not Anagrams");
            return 0;
        }
    }

    printf("Anagrams");
    return 0;
}
