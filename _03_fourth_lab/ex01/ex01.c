#include <stdio.h>
#include <math.h>

int main() {
    int a1 = 0;
    int a2 = 0;
    float a3 = 0;
    char c;


    printf("Please enter number1: ");
    scanf("%d", &a1);

    printf("Please enter number2: ");
    scanf("%d ", &a2);

    printf("Please enter operator: ");
    scanf("%c", &c);

    if (c == '+') {
        a3 = a1 + a2;
    } else if (c == '-') {
        a3 = a1 - a2;
    } else if (c == '*') {
        a3 = a1 * a2;
    } else if (c == '/') {
        if (a3 == 0) {
            printf("cannot divide by zero");
            return 0;
        }
        a3 = a1 / a2;
    }
    
    printf("%f", a3);

    return 0;
}