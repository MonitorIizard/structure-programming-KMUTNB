#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x1;
    int x2;
} point;

void pointer (point *x) {
    printf("%d %d", (*x).x1, (*x).x2);
}

int main () {
    point p1;
    point *ptr;

    p1.x1 = 5;
    p1.x2 = 6;

    printf("%d %d\n", p1.x1, p1.x2);
    
    ptr = &p1;
    
    (*ptr).x1 = 9;
    ptr -> x2 = 10;

    printf("%d %d\n", p1.x1, p1.x2);

    point *ptr2;
    ptr2 = malloc(sizeof(point));
    //printf("size of point = %lu", sizeof(point));
    (*ptr2).x1 = 20;
    (*ptr2).x2 = 30;
    printf("%d %d\n", ptr2 -> x1, ptr2 -> x2);

    pointer(&p1);
    return 0;
}