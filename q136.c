#include <stdio.h>

enum Menu { ADD=1, SUBTRACT, MULTIPLY };

int main() {
    int a, b;
    enum Menu choice;

    scanf("%d %d", &a, &b);
    scanf("%d", &choice);

    switch (choice) {
        case ADD:
            printf("%d", a + b);
            break;
        case SUBTRACT:
            printf("%d", a - b);
            break;
        case MULTIPLY:
            printf("%d", a * b);
            break;
        default:
            printf("Invalid");
    }

    return 0;
}
