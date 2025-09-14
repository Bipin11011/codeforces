#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int giver[n + 1];
    int receiver[n + 1];

    for (int i = 1; i <= n; i++) {
        scanf("%d", &giver[i]);
        receiver[giver[i]] = i;
    }

    for (int i = 1; i <= n; i++) {
        printf("%d ", receiver[i]);
    }
    printf("\n");

    return 0;
}