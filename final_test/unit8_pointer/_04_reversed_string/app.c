#include <stdio.h>

void reversed_str(char *messege1, char *messege2) {
    char *s = messege1;
    while (*s != '\0') {
        s++;
    }
    
    char *dst;
    dst = messege2;

    int length = (s - messege1);
    for (int i = 0; i < length; i++) {
        *dst = *(messege1 + length - i - 1);
        dst += 1;
    }
    dst += 1;
    *dst = '\0';
}

void countInteger(char *messege, int *integer) {
    while (*messege != '\0') {
        int ascii = *messege;
        if (ascii >= 48 && ascii < 57) {
            *integer += 1;
        }
        messege++;
    }
}

int main () {
    char messege1[100];
    scanf("%[^\n]", messege1);
    char messege2[100];
    int intergerCounter = 0;

    reversed_str(messege1, messege2);
    countInteger(messege2, &intergerCounter);

    printf("%s\n", messege2);
    printf("%d", intergerCounter);
    return 0;
}