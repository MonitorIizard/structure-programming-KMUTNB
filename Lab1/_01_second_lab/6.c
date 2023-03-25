#include <stdio.h>

int main() {
    float x1, x2, x3, x4;

    scanf("%f %f %f %f", x1, x2, x3, x4);

    float median;
    median = (x2 + x3) / 2;
    
    printf("median is %.1f", median);

    return 0;
}