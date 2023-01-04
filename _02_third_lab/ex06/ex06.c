#include <stdio.h>
#include <math.h>

int main() {
    int a = 0;
    int b = 0;

    scanf("%d", &a);
    scanf("%d", &b);

    int c = ceil((float)b / a);

    printf("%d", c);

    return 0;
}