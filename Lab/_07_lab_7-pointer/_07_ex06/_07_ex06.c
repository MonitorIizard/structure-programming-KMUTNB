#include <stdio.h>

void drawline(char c, int begin, int end) {
    int i = 0;

    for (i = 0; i < end; i++) {
        if (i < begin - 1) {
            printf(" ");
        } else {
            printf("%c",c);
        }
    }
}

void drawpoints (char c, int *list, int n) {
    int _size = list[n-1];
    int i = 0;
    int j = 0;
    
    for (i = 1; i <= _size; i++) {
        if (i == list[j]) {
            printf("%c", c);
            j++;
        } else {
            printf(" ");
        }
    }
    printf("\n");
}

int main () {
    int list[10]; char c = '*';
    /* draw triangle */ list[0] = 5; drawpoints(c, list, 1); 
    list[0] = 3; 
    list[1] = 7; 
    drawpoints(c, list, 2); 
    list[0] = 1; 
    list[1] = 9;
    drawpoints(c, list, 2); 
    drawline(c, 1, 10);
    /* draw rectangle */ 
    printf("\n");
    c = '#';
    drawline(c, 1, 10); 
    list[0] = 1; 
    list[1] = 10;
    drawpoints(c, list, 2); 
    drawpoints(c, list, 2); 
    drawline(c, 1, 10);
    getchar();

    return 0;
}