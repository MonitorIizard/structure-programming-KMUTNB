#include <stdio.h>

int main () {
    FILE *ptr;
    ptr = fopen("../../data.txt", "r");
    char name[100];

    fread(&name, sizeof(name), 2, ptr);
    printf("%s", name);
    //printf("%d", sizeof(name));
    fclose(ptr);
    return 0;
}