#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

struct Student getTop(struct Student s[], int n) {
    struct Student top = s[0];
    int i;

    for (i = 1; i < n; i++)
        if (s[i].marks > top.marks)
            top = s[i];

    return top;
}

int main() {
    struct Student s[5], top;
    int i;

    for (i = 0; i < 5; i++)
        scanf("%s %d %f", s[i].name, &s[i].roll_no, &s[i].marks);

    top = getTop(s, 5);

    printf("Topper: %s %d %.2f", top.name, top.roll_no, top.marks);

    return 0;
}
