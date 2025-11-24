#include <stdio.h>

int main() {
    int a, b;
    char op;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Enter operator (+, -, *, /, %): ");
    scanf(" %c", &op);   

    switch(op) {
        case '+':
            printf("Result = %d", a + b);
            break;

        case '-':
            printf("Result = %d", a - b);
            break;

        case '*':
            printf("Result = %d", a * b);
            break;

        case '/':
            if (b == 0)
                printf("Cannot divide by zero!");
            else
                printf("Result = %d", a / b);
            break;

        case '%':
            if (b == 0)
                printf("Cannot take modulus by zero!");
            else
                printf("Result = %d", a % b);
            break;

        default:
            printf("Invalid operator");
    }

    return 0;
}
