#include <stdio.h>

int main () {
    int size = 8;
    int coordinate[size][2];

    for (int i = 0; i < size; i++) {
        scanf("%d %d", coordinate[i][0], coordinate[i][1]);
    }

    for (int j = 0; j < size; j++)
    {
        printf("%d %d",coordinate[j][0], coordinate[j][1]);
    }
    
    return;
}