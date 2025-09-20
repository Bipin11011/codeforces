#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int skill[n+1];
    int ones[n], twos[n], threes[n];
    int count1 = 0, count2 = 0, count3 = 0;

    
    for (int i = 1; i <= n; i++) {
        scanf("%d", &skill[i]);
        if (skill[i] == 1) {
            ones[count1++] = i;
        } else if (skill[i] == 2) {
            twos[count2++] = i;
        } else if (skill[i] == 3) {
            threes[count3++] = i;
        }
    }

    
    int teams = count1;
    if (count2 < teams) teams = count2;
    if (count3 < teams) teams = count3;

    printf("%d\n", teams);

    
    for (int i = 0; i < teams; i++) {
        printf("%d %d %d\n", ones[i], twos[i], threes[i]);
    }

    return 0;
}
