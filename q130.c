#include <stdio.h>

int main() {
    FILE *fp = fopen("students.txt", "w");
    int n, i, roll, marks;
    char name[50];

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter name, roll, marks: ");
        scanf("%s %d %d", name, &roll, &marks);
        fprintf(fp, "%s %d %d\n", name, roll, marks);
    }

    fclose(fp);

    fp = fopen("students.txt", "r");

    printf("\nStored Records:\n");
    while (fscanf(fp, "%s %d %d", name, &roll, &marks) == 3) {
        printf("Name: %s  Roll: %d  Marks: %d\n", name, roll, marks);
    }

    fclose(fp);
    return 0;
}
