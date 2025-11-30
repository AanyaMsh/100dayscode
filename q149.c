#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student *s = (struct Student*) malloc(sizeof(struct Student));

    scanf("%s %d %f", s->name, &s->roll, &s->marks);

    printf("%s %d %.2f", s->name, s->roll, s->marks);

    free(s);
    return 0;
}
