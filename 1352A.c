#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);

        int count = 0;
        int temp = n;
        int power = 1;

        while (temp > 0) {
            if (temp % 10 != 0) {
                count++;
            }
            temp /= 10;
            power *= 10;
        }

        printf("%d\n", count);

        temp = n;
        power = 1;
        while (temp > 0) {
            if (temp % 10 != 0) {
                printf("%d ", (temp % 10) * power);
            }
            temp /= 10;
            power *= 10;
        }
        printf("\n");
    }
    return 0;
}