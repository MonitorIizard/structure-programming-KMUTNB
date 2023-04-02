#include <stdio.h>

int main () {
    float table[5] = {5, 2, 3, 4, 5};
    int a = 5;
    int b = 5;

    printf("%d\n", &(table[1]));
    printf("%d\n", &(table[2]));
    

    return 0;
}