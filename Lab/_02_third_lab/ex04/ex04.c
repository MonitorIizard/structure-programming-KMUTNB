#include <stdio.h>
#include <math.h>

int main () {
    float a = 0.0;
    float b = 0.0;
    float c = 0.0;

    scanf("%f", &a);
    scanf("%f", &b);
    
    c = pow(a * a + b * b, 0.5);

    printf("%f",c);

    return 0;
}