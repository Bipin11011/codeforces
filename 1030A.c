#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int hard_count = 0;
    for (int i = 0; i < n; i++) {
        int opinion;
        scanf("%d", &opinion);
        if (opinion == 1) {
            hard_count++;
        }
    }

    if (hard_count > 0) {
        printf("HARD\n");
    } else {
        printf("EASY\n");
    }

    return 0;
}