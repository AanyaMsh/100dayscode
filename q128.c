#include <stdio.h>

int main() {
    FILE *fp = fopen("text.txt", "r");
    char ch;
    int v = 0, c = 0;

    if (fp == NULL) {
        printf("File not found!");
        return 0;
    }

    while ((ch = fgetc(fp)) != EOF) {
        if ((ch>='a'&&ch<='z') || (ch>='A'&&ch<='Z')) {
            ch = (ch>='A'&&ch<='Z') ? ch+32 : ch;

            if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
                v++;
            else
                c++;
        }
    }

    printf("Vowels: %d\n", v);
    printf("Consonants: %d\n", c);

    fclose(fp);
    return 0;
}
