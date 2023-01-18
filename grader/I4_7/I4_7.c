#include <stdio.h>

int main () {
    int size = 0;
    scanf("%d", &size);
    int number[size]; 

    for(int j = 0; j < size; j++) {
        scanf("%d", &number[j]);
    }

    for(int i = 0; i < size; i++){
        int key = 1;
        for (int x = 0; x < number[i]; x++) {
            if (number[i] < 2) {
                printf("n\n");
                key = 0;
                break;
            }

            if (number[i] % x == 0 && x >= 2) {
                key = 0;
                printf("n\n");
                break;
            }
        } 
        if (key == 0) {
            continue;
        }
        printf("y\n");
    }
    

   

    return 0;
}