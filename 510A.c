#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    for (int i = 1; i <= n; ++i) {
        if (i % 2 != 0) { 
            for (int j = 1; j <= m; ++j) {
                printf("#");
            }
            printf("\n");
        } else { 
            if (i % 4 == 0) { 
                printf("#");
                for (int j = 2; j <= m; ++j) {
                    printf(".");
                }
                printf("\n");
            } else { // 
                for (int j = 1; j < m; ++j) {
                    printf(".");
                }
                printf("#\n");
            }
        }
    }

    return 0;
}