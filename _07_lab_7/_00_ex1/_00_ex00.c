#include <stdio.h>
#include <math.h>
#include "_00_ex01.c"

int main () {
    float x = ceil(-fabs(-8 + floor(-5.5)));
    printf("%f", x);
    say_hello();
    return 0;
}