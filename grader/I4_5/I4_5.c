#include <stdio.h>

int main () {
    int number = 0;
    scanf("%d", &number);

    int secret_code[8];
    secret_code[7] = number > 10000 ? 0 : 1;  
    secret_code[6] = number > 1000 ? 0 : 1;
    secret_code[5] = number > 100 ? 0 : 1;
    secret_code[4] = number > 10 ? 0 : 1;

    if(number % 2 == 0) {
        secret_code[3] = number % 6 == 0 ? 0 : 1;
    } else {
        secret_code[3] = number % 5 == 0 ? 0 : 1;
    }

    if(number % 2 == 0) {
        secret_code[2] = number % 3 == 0 ? 0 : 1;
    } else {
        secret_code[2] = number % 4 == 0 ? 0 : 1;
    }

    // printf("%d", number % 10);

    secret_code[1] = (number % 10) % 2 == 0 ? 0 : 1 ;
    secret_code[0] = number % 2 != 0 ? 0 : 1 ;
    
    for (int i = 0; i  < 8 ; i++) {
        printf("%d", secret_code[i]);
    }
    return 0;
}