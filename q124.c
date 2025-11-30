#include <stdio.h>

int main() {
    char src[50], dest[50], ch;

    printf("Enter source filename: ");
    scanf("%s", src);

    printf("Enter destination filename: ");
    scanf("%s", dest);

    FILE *fs = fopen(src, "r");
    FILE *fd = fopen(dest, "w");

    if (fs == NULL) {
        printf("Source file not found!");
        return 0;
    }

    while ((ch = fgetc(fs)) != EOF)
        fputc(ch, fd);

    fclose(fs);
    fclose(fd);

    printf("Copied successfully!");
    return 0;
}
