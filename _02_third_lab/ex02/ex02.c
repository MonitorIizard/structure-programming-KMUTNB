#include <stdio.h>
#include <math.h>

int main () {
    float degree = 0.0;

    printf("Please enter angle in degree : ");
    scanf("%f", &degree);

    degree = degree * M_PI / 180;


    printf("sine of %f degree is %.4f\n", degree, sin(degree));

    printf("cos of %f degree is %.4f", degree, cos(degree));

    return 0;
}