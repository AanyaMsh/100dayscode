#include <stdio.h>

int main() {
    char a[200], b[200];
    int i, j, k, lenA = 0, lenB = 0;

    scanf("%[^\n]", a);
    getchar();
    scanf("%[^\n]", b);

    while (a[lenA] != '\0') lenA++;
    while (b[lenB] != '\0') lenB++;

    if (lenA != lenB) {
        printf("Not Rotation");
        return 0;
    }

    for (i = 0; i < lenA; i++) {
        int match = 1;

        for (j = 0; j < lenA; j++) {
            k = (i + j) % lenA; // rotation index
            if (a[k] != b[j]) {
                match = 0;
                break;
            }
        }

        if (match == 1) {
            printf("Rotation");
            return 0;
        }
    }

    printf("Not Rotation");
    return 0;
}
