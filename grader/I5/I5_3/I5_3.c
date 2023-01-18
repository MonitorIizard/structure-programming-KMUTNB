#include <stdio.h>

int main () {
    int n1 = 0;
    int n2 = 0;
    scanf("%d %d", &n1, &n2);
    int matrix_A[n1][n2];
    int matrix_B[n1][n2];

    for(int x = 0; x < n1; x++) {
        for(int y = 0; y < n2; y++) {
            scanf("%d", &matrix_A[x][y]);
        }
    }

    for(int i = 0; i < n1; i++) {
        for(int j = 0; j < n2; j++) {
            matrix_B[i][j] = matrix_A[j][i];
        }
    }

    for(int i = 0; i < n1; i++) {
        for(int j = 0; j < n2; j++) {
            if (j != n2) {
                printf("%d ", matrix_B[i][j]);
            } else {
                printf("%d", matrix_B[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}