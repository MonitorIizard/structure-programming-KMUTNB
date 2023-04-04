#include <stdio.h>

int main () {
    char ch;
    FILE *fptr;
    fptr = fopen("../data.txt", "r");

    if (fptr == 0) { 
        printf("file is invalid"); 
    } else {
        while ((ch = fgetc(fptr)) != EOF) printf("%c", ch);
        fclose(fptr);
    }



    return 0;
}