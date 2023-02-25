#include <stdio.h>
#include <math.h>

int main () { 
    int SIZE = 7;
    float half = SIZE / 2.0;
    int d_log[999][2];

    printf("input size: ");
    scanf("%d", &SIZE);
    for (int i = 0; i < half; i++) {
        int half_min = half - i, half_max = half + i;
        d_log[i][0] = half_min;
        d_log[i][1] = half_max;
        for (int j = 0; j < SIZE; j++) {
            if (j >= half_min && j <= half_max) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    for (int i = 2; i >= 0; i--) {
        int half_min = half - i, half_max = half + i;
        for (int j = 0; j < SIZE; j++) {
            if (j >= half_min && j <= half_max) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}