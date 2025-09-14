#include <stdio.h>

int is_lucky(int n) {
    while (n > 0) {
        int digit = n % 10;
        if (digit != 4 && digit != 7) {
            return 0; 
        }
        n /= 10;
    }
    return 1; 
}

int main() {
    int n;
    scanf("%d", &n);

    int found = 0;
    for (int i = 1; i <= n; i++) {
        if (is_lucky(i) && n % i == 0) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}