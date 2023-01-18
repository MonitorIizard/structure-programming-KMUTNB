#include <stdio.h>

int main () {
    int number, count = 0;
    int previous_number, max_number = 0;

    while (1) {
        scanf("%d", &number);    
        previous_number = number;
        // printf("%d\n", previous_number);

        if(previous_number == max_number) {
            count += 1;
        }

        if(previous_number > max_number) {
            count = 1;
            max_number = previous_number;
            // printf("%d", max_number);
        }

        if (previous_number == 0) {
            break;
        }

    }
    
    printf("%d %d", max_number, count);
    return 0;
}