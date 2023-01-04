#include <stdio.h>

int main () {
    int a = 0;
    int b = 0;
    

    scanf("%d", &a);
    scanf("%d", &b);

    int min = a > b ? b : a;
    int i = min;

    for (i = min; i > 0; i--) {
        if ((int)((float)a / (float)i) == ((float)a / (float)i) && (int)((float)b / (float)i) == ((float)b / (float)i)){
            printf("%d", i);
            return 0;
        }
    }

    return 0;
}