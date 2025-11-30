#include <stdio.h>

int main() {
    FILE *in = fopen("input.txt", "r");
    FILE *out = fopen("output.txt", "w");
    char ch;

    if (in == NULL) {
        printf("input.txt not found!");
        return 0;
    }

    while ((ch = fgetc(in)) != EOF) {
        if (ch >= 'a' && ch <= 'z')
            ch = ch - 32;

        fputc(ch, out);
    }

    printf("Converted successfully!");

    fclose(in);
    fclose(out);
    return 0;
}
