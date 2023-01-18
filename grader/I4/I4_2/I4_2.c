#include <stdio.h>

int main () {
    int target;
    scanf("%d", &target);
    int i = 1;
    int j = 1;

    for (i = 1; i <= target; i++) {
        if (i <= target) {
            for (j = 1; j <= target * 2 - 1; j++) {
                if (j == target - i + 1|| j == target+ i - 1) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
        printf("\n");
        }
    }
    
    for (i = 1; i <= target; i++ ){
        if (i == 1) {
            continue;
        }

        for(j = 1; j <= target * 2 - 1; j++) {
            if(j == i || j == target * 2 - i ) {
                printf("*");
            } else {
                printf(" ");
            }
        }
         printf("\n");
    }
}