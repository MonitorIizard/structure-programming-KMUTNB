#include <stdio.h>

int main () {
    float width, length;
    float area;

    printf("Please enter area : ");
    scanf("%f", &area);
    scanf("%f", &width);
    printf("Please enter Width :");
   
    length = area/width;
    printf("Area = %7.3f, width = %7.5f and length = %7.7f\n", area, width, length);

}