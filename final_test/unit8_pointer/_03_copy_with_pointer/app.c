#include <stdio.h>

void copy (char messege1[100], char messege2[100]) {
    int i  = 0;
    for (i = 0; i < 100; i++) {
        //printf("%c_", *(messege1));
        *(messege2) = *(messege1);
        if (*messege1 == '\0') {
            break;
        }
        messege1 += 1;
        messege2 += 1;
    }
}

int main () {
    char messege1[100];
    scanf("%[^\n]", messege1);
    char messege2[100];
    copy(messege1, messege2);
    printf("\nmessege 1 = %s\n", messege1);
    printf("messege 2 = %s\n", messege2);
    return 0;
}