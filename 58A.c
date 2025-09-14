#include <stdio.h>
#include <string.h>

int check_hello(const char *s) {
    const char *hello = "hello";
    int hello_index = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == hello[hello_index]) {
            hello_index++;
            if (hello_index == 5) {
                return 1; 
            }
        }
    }
    return 0; 
}

int main() {
    char input[101];
    scanf("%s", input);

    if (check_hello(input)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}