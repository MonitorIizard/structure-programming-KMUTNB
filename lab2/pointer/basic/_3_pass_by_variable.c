#include <stdio.h>

int multiply(int *x, int *y) {
    int z = 0;
    printf("%p\n", x);
    return z = (*x) * (*y);
}

int main () {
    int x = 5;
    int y = 6;
    printf("%p\n", &x);
    int z = multiply(&x, &y);

    printf("%d", z);

    return 0;
}