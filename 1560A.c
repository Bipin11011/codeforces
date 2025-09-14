#include <stdio.h>


int disliked_numbers[1005];

void precompute_disliked_numbers() {
    int count = 0; 
    int current_num = 1; 

    
    while (count < 1000) {
        
      
        if (current_num % 3 != 0 && current_num % 10 != 3) {
            disliked_numbers[count] = current_num; 
            count++;
        }
        current_num++;
    }
}

int main() {
    
    precompute_disliked_numbers();

    int t;
    scanf("%d", &t); 

    while (t--) { 
        int k;
        scanf("%d", &k);

      
        printf("%d\n", disliked_numbers[k - 1]);
    }

    return 0;
}