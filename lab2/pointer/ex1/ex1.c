#include <stdio.h>

void ReverseString (char messege[]) {
    char *p = messege;
    int count = 0;

    while (*p != '\0') {
        p++;
        count++;
    }

    for (int i = 1; i <= count; i++) {
        printf("%c", *(p - i));
    }

}



int main () {
    char messege[100];
    scanf("%[^\n]", messege);
    int count = 0;
    ReverseString(messege);
    return 0;
}