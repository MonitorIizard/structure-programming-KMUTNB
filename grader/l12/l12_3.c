#include <stdio.h>

int main () {
    int SIZE = 0;
    scanf("%d", &SIZE);
    int number[SIZE];

    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &number[i]);
    }

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (number[i] < number[j]) {
                int temp = number[i];
                number[i] = number[j];
                number[j] = temp;
            }
        }
    }

    int negativeValueCount = 0;
    for (int i = 0; i < SIZE ; i++) {
        if (number[i] < 0) {
            negativeValueCount += 1;
        }
    }

    int sum = 1;

    for (int i = 0; i < SIZE ; i++) {
        
        if (i == negativeValueCount - 1 && negativeValueCount % 2 != 0 && negativeValueCount != 0) {
            continue;
        }

        if (number[i] == 0) {
            continue;
        }

        sum *= number[i];
    }

    if (SIZE == 1) {
        sum = number[0];
    }

    if (SIZE == 2) {
        sum = number[0] * number[1];
    }

    if (SIZE == 0) {
        sum = 0;
    }

    if (SIZE == 3) {
        for (int i = 0; i < 3; i++) {
            if (number[i] == 0) {
                continue;
            }
            sum *= number[i];
        }
    } 

    // for (int i = 0; i < SIZE; i++) {
    //     printf(" %d", number[i]);
    // }

    printf("%d", sum);

    return 0;
}