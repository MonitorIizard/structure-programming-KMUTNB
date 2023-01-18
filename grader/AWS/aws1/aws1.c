#include <stdio.h>

int main () {
    char input[99];
    scanf("%s", input);
    printf("%c", input[98]);

    for (int i = 0; i < 99; i++) {
        


        if (input[i] == 0) {
            break;
        }
    }
    return 0;
}