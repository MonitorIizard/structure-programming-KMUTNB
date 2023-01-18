#include <stdio.h>

int main () {
    int n1 = 4,n2 = 4;
    scanf("%d %d", &n1, &n2);
    // int a[n][n] = {{1, 5, 3, 7,},{2, 6, 9, 2},{4, 10, 1, 0},{9, 0, 8, 7,}};
    // int b[n][n] = {{11, 3, 2, 1},{5, -5, 0, 4},{12, 1, 1, 3},{7, 5, -4, 6}};
    int a[n1][n2];
    int b[n1][n2];
    int c[n1][n2];

    for(int a1 = 0; a1 < n1; a1++) {
        for(int a2 = 0; a2 < n2; a2++) {
            scanf("%d", &a[a1][a2]);
        }
    }

    for(int b1 = 0; b1 < n1; b1++) {
        for(int b2 = 0; b2 < n2; b2++) {
            scanf("%d", &b[b1][b2]);
        }
    }

    for(int i = 0; i < n1; i++) {
        for (int j = 0; j < n2 ; j++) {
            c[i][j] = a[i][j] + b[i][j];

            if (i == n1 && i == n2) {
                printf("%d", c[i][j]);
            } else {
                printf("%d ", c[i][j]);
            }
        }   
        printf("\n");
    }


 
 
 
    return 0;
}