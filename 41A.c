#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char s[101], t[101];
    scanf("%s", s);
    scanf("%s", t);

    int l_s = strlen(s);
    int l_t = strlen(t);

    if (l_s != l_t) {
        printf("NO\n");
        return 0;
    }

    int is_reverse = 1; 
    for (int i = 0; i < l_s; i++) {
        if (s[i] != t[l_s - 1 - i]) {
            is_reverse = 0;
            break;
        }
    }

    if (is_reverse) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}