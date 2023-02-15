#include <stdio.h>

int main () {
    float h = 0, r = 0.0, v = 0.0;
    scanf("%f %f", &h, &r);
    v = 3.1416 * h * r * r;
    printf("%0.1f",v);

    return 0;
}