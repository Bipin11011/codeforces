#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int rooms = 0;
    for (int i = 0; i < n; i++) {
        int p, q;
        scanf("%d %d", &p, &q);
        if (q - p >= 2) {
            rooms++;
        }
    }

    printf("%d\n", rooms);

    return 0;
}