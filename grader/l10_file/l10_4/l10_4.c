#include <stdio.h>

typedef struct {
    int a;
    int e;
    int i;
    int o;
    int u;
} alphabet;

int main () {
    alphabet count = {0 ,0 ,0 ,0, 0};
    FILE *f;
    char ch;
    char fileName[20] = "random1.txt"; 

    f = fopen("random1.txt", "r");

    while ((ch = getc(f)) != EOF) {
        if (ch == 'a') {count.a += 1;}
        if (ch == 'e') {count.e += 1;}
        if (ch == 'i') {count.i += 1;}
        if (ch == 'o') {count.o += 1;}
        if (ch == 'u') {count.u += 1;}
    }

    printf("a : %d\ne : %d\ni : %d\no : %d\nu : %d\n", count.a, count.e, count.i, count.o, count.u);
    
    FILE *w;
    w = fopen("save.txt", "w");
    int write = fprintf(w, "a : %d\ne : %d\ni : %d\no : %d\nu : %d\n", count.a, count.e, count.i, count.o, count.u);
    fclose(w);
    fclose(f);
    return 0;
}