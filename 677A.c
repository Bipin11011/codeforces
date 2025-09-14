#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, h;
    scanf("%d %d", &n, &h);

    int width = 0;
    for (int i = 0; i < n; i++) {
        int height;
        scanf("%d", &height);
        if (height > h) {
            width += 2;
        } else {
            width += 1;
        }
    }

    printf("%d\n", width);

    return 0;
}