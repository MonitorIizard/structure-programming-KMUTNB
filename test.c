#include <stdio.h>

int main() {
    float width;
    float length;
    float area;
    printf("Please enter area: ");
    scanf("%f", &area);
    printf("Please enter width: ");
    scanf("%f", &width);
    length = area / width;
    printf("Area = %7.4f , width = %7.3f and length = %7.2f\n", area, width, length);
    return 0;   
}