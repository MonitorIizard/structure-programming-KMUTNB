#include <stdio.h>

int main() {
    float base = 0, height = 0, area = 0;

    printf("Enter base value : ");
    scanf("%f", &base);

    printf("Enter height value : ");
    scanf("%f", &height);

    area =   (base * height) / 2; //because it a integer

    printf("Area is : %7.2f", area);

    return 0;
}