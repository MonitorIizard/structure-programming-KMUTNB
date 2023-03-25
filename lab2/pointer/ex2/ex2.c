#include <stdio.h>

int main () {
    int SIZE = 3;
    char messegeSet[3][100];

    for (int i  = 0 ;i < SIZE; i++) {
        scanf("%s", messegeSet[i]);
    }

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%c", *(*(messegeSet + j) + i));
        }
    }
    // for (int i  = 0 ;i < SIZE; i++) {
    //     printf("%s\n", messegeSet[i]);
    // }
    return 0;
}