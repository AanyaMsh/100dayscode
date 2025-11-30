#include <stdio.h>

enum Gender { MALE, FEMALE, OTHER };

struct Person {
    char name[50];
    enum Gender g;
};

int main() {
    struct Person p;

    scanf("%s", p.name);
    scanf("%d", &p.g);

    printf("Name: %s\n", p.name);

    if (p.g == MALE)
        printf("Gender: Male");
    else if (p.g == FEMALE)
        printf("Gender: Female");
    else
        printf("Gender: Other");

    return 0;
}
