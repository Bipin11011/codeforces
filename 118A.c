#include <stdio.h>
#include <string.h>
#include <ctype.h>

int is_vowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y');
}

int main() {
    char input[101];
    scanf("%s", input);

    int len = strlen(input);
    for (int i = 0; i < len; i++) {
        if (!is_vowel(input[i])) {
            printf(".%c", tolower(input[i]));
        }
    }
    printf("\n");

    return 0;
}