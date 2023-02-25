#include <stdio.h>

int main () {
    int matrix_a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matrix_b[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrix_b[i][j] = matrix_a[j][i];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d", matrix_b[i][j]);
        }
        printf("\n");
    }
    return 0;
}