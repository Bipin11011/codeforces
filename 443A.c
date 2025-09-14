#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char s[1001];
    fgets(s, sizeof(s), stdin);

    bool seen[26] = {false};
    int count = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z' && !seen[s[i] - 'a']) {
            seen[s[i] - 'a'] = true;
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}