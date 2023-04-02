#include <stdio.h> 

void swap (int *px, int *py);

int main () {
    int x = 10;
    int y = 20;
    // int *ix;
    // ix = &x;

    // int *iy;
    // iy = &y;
    printf("%d %d\n", x, y);
    swap(&x, &y);
    printf("%d %d", x, y);


    return 0;
}

void swap(int *px, int *py) {
    int temp;
    temp = *py;
    *py = *px;
    *px = temp;
}