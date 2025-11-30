#include <stdio.h>

int main() {
    FILE *fp = fopen("info.txt", "r");
    char line[200];

    if (fp == NULL) {
        printf("File not found!");
        return 0;
    }

    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    fclose(fp);
    return 0;
}
