#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int sereja_score = 0;
    int dima_score = 0;
    int left = 0;
    int right = n - 1;
    int turn = 0; 

    while (left <= right) {
        int current_card;
        if (a[left] > a[right]) {
            current_card = a[left];
            left++;
        } else {
            current_card = a[right];
            right--;
        }

        if (turn == 0) {
            sereja_score += current_card;
        } else {
            dima_score += current_card;
        }
        turn = 1 - turn; 
    }

    printf("%d %d\n", sereja_score, dima_score);

    return 0;
}