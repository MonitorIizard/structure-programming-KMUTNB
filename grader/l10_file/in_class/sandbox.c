#include <stdio.h>

int main () {
    FILE *fptr;
    fptr = fopen("data.txt", "r");

    if (fptr == 0) {
        printf("File is invalid");
    }

    if (fptr == EOF) {
        printf("1");
    }

    fclose(fptr);

    return 0;
}