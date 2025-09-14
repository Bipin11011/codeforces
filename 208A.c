#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    char s[205];
    scanf("%s", s);

    int n = strlen(s);
    bool space_needed = false;

    for (int i = 0; i < n; ++i) {
        if (i + 2 < n && s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B') {
            i += 2;
            if (space_needed) {
                printf(" ");
                space_needed = false;
            }
        } else {
            printf("%c", s[i]);
            space_needed = true;
        }
    }
    printf("\n");
    return 0;
}
