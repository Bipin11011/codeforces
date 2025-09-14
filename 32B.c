#include <stdio.h>
#include <string.h>

int main() {
    char borze[205]; 
    char decoded[205];
    int i, j = 0;

    scanf("%s", borze);

    for (i = 0; borze[i] != '\0'; i++) {
        if (borze[i] == '.') {
            decoded[j++] = '0';
        } else if (borze[i] == '-') {
            if (borze[i + 1] == '.') {
                decoded[j++] = '1';
                i++; 
            } else if (borze[i + 1] == '-') {
                decoded[j++] = '2';
                i++;  
            }
        }
    }

    decoded[j] = '\0';
    printf("%s\n", decoded);

    return 0;
}