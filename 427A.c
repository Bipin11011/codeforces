#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int available_officers = 0;
    int unhandled_crimes = 0;

    for (int i = 0; i < n; i++) {
        int event;
        scanf("%d", &event);

        if (event > 0) {
            
            available_officers += event;
        } else {
           
            if (available_officers > 0) {
                available_officers--;
            } else {
                unhandled_crimes++;
            }
        }
    }

    printf("%d\n", unhandled_crimes);

    return 0;
}