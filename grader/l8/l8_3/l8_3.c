#include <stdio.h>

// int reverse (char *c) {
//     // now *c represent value from that position
//     //int i = 0; j,k;

//     char *p = c;
//     while (*p != '\0')
//     {
//         printf("%c", *p);
//         p++;
//     }
//     return p-c;
// }

int main () {
    char messege[999];
    char answer[999];
    char *pointer = messege;
    int i = 0;
    int size = 0;

    gets(messege);
    //printf("%s", messege);

    for (int i = 0; i < 100; i++){
        if(messege[i] == '\0') {
            break;
        }
        size++;
    }

    int k = 0;

    for (int i = size - 1; i >= 0; i--) {
        answer[k] = messege[i];
        printf("%c", answer[k]);
        k++;
    }
    
    printf("\n");

    int count_number = 0;
    for (int i = 0; i < size; i++) {
        if ((int) answer[i] >= 48 && (int) answer[i] <= 57) {
            count_number++;
        }
    }
    // printf("%d\n", size);
    // printf("%s\n", answer);
    printf("%d\n", count_number);
    return 0;
}