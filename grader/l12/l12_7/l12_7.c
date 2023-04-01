#include <stdio.h>

int main () {
    int x = 10, y = 20;
    int a[10] = {9, 8, 7 ,6, 5, 4, 3, 2, 1, 0};
    int *ip, *iq;
    ip = &x;
    printf("*ip = %d\n", *ip);

    y = *ip;
    printf("y = %d\n", y);

    *ip = 0;
    printf("x = %d\n", x);

    ip = &a[0 + 3];
    printf("*ip = %d\n", *ip);

    ip += 3;
    printf("*ip = %d \n",*ip);

    *ip = 0;
    printf("a[3] = %d \n", a[3]);

    *ip = *ip + 10;
    printf("a[6] = %d \n", a[6]);

    iq = ip;
    printf("*ip = %d \n",*ip);

    *iq = 0;
    printf("*iq = %d\n", *iq);

    *iq = *iq - 2;
    printf("*ip = %d \n",*ip);

    return 0;
}