#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int n;
    scanf("%d", &n);
    char str[n + 1];
    scanf("%s", str);

    int alphabet[26] = {0};
    for (int i = 0; i < n; i++) {
        char c = tolower(str[i]);
        if (c >= 'a' && c <= 'z') {
            alphabet[c - 'a'] = 1;
        }
    }

    int is_pangram = 1;
    for (int i = 0; i < 26; i++) {
        if (alphabet[i] == 0) {
            is_pangram = 0;
            break;
        }
    }

    if (is_pangram) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}