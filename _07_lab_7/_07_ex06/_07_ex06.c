#include <stdio.h>

void drawline(char c, int begin, int end) {
    int i = 0;

    for (i = 0; i < end; i++) {
        if (i < begin) {
            printf(" ");
        } else {
            printf("%c",c);
        }
    }
}

void drawpoint (char c, int *list, int n) {

}

int main () {
    drawline('+', 5, 10);
    int list[10];

    //draw triangle 
    
    return 0;
}