#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int digit1 = n / 100000;
        n %= 100000;
        int digit2 = n / 10000;
        n %= 10000;
        int digit3 = n / 1000;
        n %= 1000;
        int digit4 = n / 100;
        n %= 100;
        int digit5 = n / 10;
        int digit6 = n % 10;

        if ((digit1 + digit2 + digit3) == (digit4 + digit5 + digit6)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}