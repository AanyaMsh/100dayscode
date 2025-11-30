#include <stdio.h>

enum Days { SUN, MON, TUE, WED, THU, FRI, SAT };

int main() {
    int i;
    for (i = SUN; i <= SAT; i++) {
        printf("Value = %d\n", i);
    }
    return 0;
}
