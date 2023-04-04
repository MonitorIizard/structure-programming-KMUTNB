#include <stdio.h>
#define CharacterSize 1000

int main () {
    char sentence[CharacterSize] = "Mok Maard 2";
    FILE *ptr;
    ptr = fopen("../../data.txt", "a");

    fprintf(ptr, "\n%s", sentence);

    fclose(ptr);

    return 0;
}