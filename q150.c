#include <stdio.h>

struct Student {
    char name[50];
    int roll;
};

int main() {
    struct Student s, *ptr;

    ptr = &s;

    scanf("%s %d", ptr->name, &ptr->roll);

    printf("%s %d", ptr->name, ptr->roll);

    return 0;
}
