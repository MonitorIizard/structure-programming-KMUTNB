#include <stdio.h>

int main () {
    int i, j,temp = 0;
    int target;
    scanf("%d", &target);

    i =  target % 2 == 0 ? 2 : 1 ;
    int x = target % 2 == 0 ? 2 : 1;

    while (1) {
        if (temp == target) {
            i = i - 2;
        }
        
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");

        if (i == target) {
            temp = target;
        }

        if (temp != target) {
            i = i + 2;
        }

        if (i == x && temp == target) {
            return 0;
        }
    }

    return 0;
}