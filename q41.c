#include <stdio.h>

int main() {
    int n, original, last, first, temp, power = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;
    last = n % 10;
    temp = n;

    while (temp >= 10) {
        temp = temp / 10;
        power = power * 10;  
    }
    first = temp; 

    n = original % power;  
    n = n / 10;         
  
    int swapped = last * power + n * 10 + first;

    printf("Number after swapping = %d", swapped);

    return 0;
}
