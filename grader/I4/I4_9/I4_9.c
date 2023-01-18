#include <stdio.h>

int check_prime (int number) {

    int key = 1;
    for (int x = 0; x < number; x++) {
        if (number < 2) {
            // printf("n1\n");
            key = 0;
            return 0;
        }

        if (number % x == 0 && x >= 2) {
            key = 0;
            // printf("n2\n");
            return 0;
        }
    } 
    return 1;
}

int main () {
    int previous_prime_number = 0;
    int max_prime_number = 0;

    int number = 0;
    while(1)
    {
        scanf("%d", &number);
        //printf("%d", check_prime(number));
        if (check_prime(number) == 1) {
            previous_prime_number = number;
            if (max_prime_number < previous_prime_number) {
                max_prime_number = previous_prime_number;
            }
        }

        if(number == 0) {
            break;
        }
    }
    
    printf("%d", max_prime_number);
}