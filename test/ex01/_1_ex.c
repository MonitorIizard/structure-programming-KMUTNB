#include <stdio.h>

int main () {
    char c = ' '; 
    scanf("%c", &c);

    int ROW = 0;
    scanf("%d", &ROW);
    int COLUMN = (ROW * 2) - 1;

    for (int i = 0; i < ROW; i++) {
        int half_min = i, half_max = COLUMN - i; 
        for (int j = 0; j < COLUMN; j++) {
            if (j >= half_min && j <= half_max - 1) {
                printf("%c", c);
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}