#include <stdio.h>

int main() {
    int k, r, n = 1;
    scanf("%d %d", &k, &r);
    while ((k * n) % 10 != 0 && (k * n) % 10 != r) {
        n++;
    }
    printf("%d\n", n);
    return 0;
} 