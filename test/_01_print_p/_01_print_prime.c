#include <stdio.h>

int main() {
    int SIZE = 100;
    

    for (int i = 0; i <= SIZE; i++){
        int key = 0;
        for (int j = 2; j <= SIZE; j++) {
            if (i % j == 0 && j != i) {
                key = 1;
                printf("x");
                break;
            }
        }
        if (key == 1) {
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}