#include <stdio.h>

int main () {
    FILE *firstPointer, *secondPointer;
    char ch;
    firstPointer = fopen("../../data.txt", "r");
    secondPointer = fopen("copy.txt", "w");


    if (firstPointer != NULL) {
        while ((ch = fgetc(firstPointer)) != EOF) {
            fputc( ch, secondPointer);
        }
    } else {
        printf("File invalid");
    }

    

    return 0;
}