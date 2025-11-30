#include <stdio.h>

int main() {
    FILE *fp = fopen("numbers.txt", "r");
    int x, sum = 0, count = 0;

    if (fp == NULL) {
        printf("File not found!");
        return 0;
    }

    while (fscanf(fp, "%d", &x) == 1) {
        sum += x;
        count++;
    }

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", (float)sum / count);

    fclose(fp);
    return 0;
}
