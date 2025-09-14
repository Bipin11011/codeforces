#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) { 
        int n;
        scanf("%d", &n); 
        int num1 = -1, num2 = -1; 
        int idx1 = -1, idx2 = -1; 
        int count1 = 0, count2 = 0; 

        for (int i = 0; i < n; ++i) {
            int current_num;
            scanf("%d", &current_num); 

            if (num1 == -1) {
                num1 = current_num;
                idx1 = i + 1;
                count1 = 1;
            } else if (current_num == num1) { 
                count1++;
            } else if (num2 == -1) { 
                num2 = current_num;
                idx2 = i + 1;
                count2 = 1;
            } else { 
                count2++;
            }
        }

        if (count1 == 1) {
            printf("%d\n", idx1);
        } else {
            printf("%d\n", idx2);
        }
    }

    return 0;
}