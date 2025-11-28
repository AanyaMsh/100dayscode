#include <stdio.h>

int main() {
    char d[3], m[3], y[5];

    scanf("%2s/%2s/%4s", d, m, y);

    printf("%s-", d);

    if (m[0]=='0' && m[1]=='1') printf("Jan-");
    else if (m[0]=='0' && m[1]=='2') printf("Feb-");
    else if (m[0]=='0' && m[1]=='3') printf("Mar-");
    else if (m[0]=='0' && m[1]=='4') printf("Apr-");
    else if (m[0]=='0' && m[1]=='5') printf("May-");
    else if (m[0]=='0' && m[1]=='6') printf("Jun-");
    else if (m[0]=='0' && m[1]=='7') printf("Jul-");
    else if (m[0]=='0' && m[1]=='8') printf("Aug-");
    else if (m[0]=='0' && m[1]=='9') printf("Sep-");
    else if (m[0]=='1' && m[1]=='0') printf("Oct-");
    else if (m[0]=='1' && m[1]=='1') printf("Nov-");
    else if (m[0]=='1' && m[1]=='2') printf("Dec-");

    printf("%s", y);

    return 0;
}
