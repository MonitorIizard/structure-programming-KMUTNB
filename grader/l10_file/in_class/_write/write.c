#include <stdio.h>

int main () {
    FILE *fptr;
    fptr = fopen("test1.txt", "r");

    fclose(fptr);

    return 0;
}