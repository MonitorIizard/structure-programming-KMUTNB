#include <stdio.h>
 
int main () {
    int m = 0, f = 0, h = 0;
    scanf("%d %d %d",&m,&f,&h);
    float s = m * 0.4 + f * 0.5 + h * 1.0;
    int num = (int)f/10;

    switch(num) 
    {
        case 10:
        case 9:
            printf("A");
            break;

        case 8:
            printf("B");
            break;

        case 7:
            printf("C");
            break;

        case 6:
            printf("D");
            break;

        case 5:
            printf("F");
            break;

       }
    return 0;
}
