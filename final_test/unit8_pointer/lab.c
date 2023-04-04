#include <stdio.h>

int main () {
    int *ip, x = 10;
    ip = &x;
    printf("%d", *ip);
    return 0;
}