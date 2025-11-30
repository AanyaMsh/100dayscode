#include <stdio.h>

enum Month { JAN=1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };

int main() {
    enum Month m;
    scanf("%d", &m);

    if (m == FEB)
        printf("28 or 29 days");
    else if (m == APR || m == JUN || m == SEP || m == NOV)
        printf("30 days");
    else
        printf("31 days");

    return 0;
}
