#include <stdio.h>

enum Day { SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY };

int main() {
    int i;
    for (i = SUNDAY; i <= SATURDAY; i++) {
        printf("%d\n", i);
    }
    return 0;
}
