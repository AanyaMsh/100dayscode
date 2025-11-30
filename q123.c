#include <stdio.h>

int main() {
    FILE *fp = fopen("text.txt", "r");
    char ch;
    int chars = 0, words = 0, lines = 0, inWord = 0;

    if (fp == NULL) {
        printf("File not found!");
        return 0;
    }

    while ((ch = fgetc(fp)) != EOF) {
        chars++;

        if (ch == '\n')
            lines++;

        if (ch != ' ' && ch != '\n' && inWord == 0) {
            words++;
            inWord = 1;
        }

        if (ch == ' ' || ch == '\n')
            inWord = 0;
    }

    printf("Characters: %d\n", chars);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    fclose(fp);
    return 0;
}
