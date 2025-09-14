#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[101];
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = 0; 

    int upper_count = 0;
    int lower_count = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (isupper(s[i])) {
            upper_count++;
        } else if (islower(s[i])) {
            lower_count++;
        }
    }

    if (upper_count > lower_count) {
        for (int i = 0; s[i] != '\0'; i++) {
            printf("%c", toupper(s[i]));
        }
    } else {
        for (int i = 0; s[i] != '\0'; i++) {
            printf("%c", tolower(s[i]));
        }
    }
    printf("\n");

    return 0;
}