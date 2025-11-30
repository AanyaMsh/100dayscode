#include <stdio.h>

int main() {
    FILE *fp = fopen("info.txt", "a");
    char text[200];

    printf("Enter text to append: ");
    scanf(" %[^\n]", text);

    fprintf(fp, "\n%s", text);

    fclose(fp);
    printf("Text appended!");
    return 0;
}
