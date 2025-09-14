#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        char s[4];
        scanf("%s", s);

        if (tolower(s[0]) == 'y' && tolower(s[1]) == 'e' && tolower(s[2]) == 's') {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}