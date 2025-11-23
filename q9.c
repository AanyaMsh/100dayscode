#include <stdio.h>

int main() {
    float principal, rate, time;
    float simpleInterest, amount, compoundInterest;

    printf("Enter Principal: ");
    scanf("%f", &principal);

    printf("Enter Rate of Interest: ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &time);

    simpleInterest = (principal * rate * time) / 100;

    amount = principal * (1 + rate/100);  
    for (int i = 1; i < time; i++) {    
        amount = amount * (1 + rate/100);
    }

    compoundInterest = amount - principal;

    printf("\nSimple Interest = %.2f\n", simpleInterest);
    printf("Compound Interest = %.2f\n", compoundInterest);

    return 0;
}
