#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    char s[n + 1];
    scanf("%s", s);

    int total = 0;
    int all = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == 'A') {
            total++;
        } else if (s[i] == 'D') {
            all++;
        }
    }

    if (total > all) {
        printf("Anton\n");
    } else if (all > total) {
        printf("Danik\n");
    } else {
        printf("Friendship\n");
    }

    return 0;
}