#include <stdio.h>

int main () {
    int i = 3, j =5, *p = &i, *q =&j, *r;
    double x = 2.5;

    printf("%d", **&p);

    return 0;
}