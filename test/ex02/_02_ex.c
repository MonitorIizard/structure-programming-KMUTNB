#include <stdio.h>

int main() {
    int m = 0, n = 0;
    scanf("%d %d", &m, &n);
    int matrix[m][n];
    int k = 0;
    int one_line[m * n];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d" ,&matrix[i][j]);
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            one_line[k] = matrix[i][j];
            k += 1;
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            if (one_line[i] < one_line[j]) {
                int temp = one_line[i];
                one_line[i] = one_line[j];
                one_line[j] = temp;
            }
        }
    }

    for (int i = 0; i < m * n; i++) {
        printf("%d ", one_line[i]);
    }

    int max = one_line[0];
    int temp = max;
    for (int i = 0; i < m * n; i++) {
        if(max < one_line[i]) {
            temp = max;
            max = one_line[i];
        }
    }

    printf("%d", temp);
    return 0;
}