#include <stdio.h>
#include <stdlib.h>

int main () {
    float radius = 0.0, area = 0.0;

    printf("Please input radiis: ");
    scanf("%f", &radius);

    area = 22.0/7 * pow(radius, 2);

    (area <= 300) ? printf("%f small\n", area) : printf("%f large\n", area);


    return 0;
}