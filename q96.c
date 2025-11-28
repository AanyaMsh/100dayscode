#include <stdio.h>

int main() {
    char s[300];
    int i = 0, start = 0, end, temp;
    
    scanf("%[^\n]", s);

    while (1) {
        if (s[i] == ' ' || s[i] == '\0') {
            end = i - 1;

            while (start < end) {
                temp = s[start];
                s[start] = s[end];
                s[end] = temp;

                start++;
                end--;
            }

            if (s[i] == '\0')
                break;

            start = i + 1;
        }
        i++;
    }

    printf("%s", s);
    return 0;
}
