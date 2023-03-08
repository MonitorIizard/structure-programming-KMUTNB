# include <stdio.h>
# include <math.h>

typedef struct 
{
    float x;
    float y;
    float z;
} vector3D;


float findlength (float x, float y, float z) {
    float length = sqrt(pow(x, 2)+  pow(y,  2)+  pow(z, 2));
    return length;
} 

int main () {
    printf("%f.3", findlength(0.5, 1.2, 2.0));

    return 0;
}