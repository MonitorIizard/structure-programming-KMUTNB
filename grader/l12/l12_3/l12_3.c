#include <stdio.h>

int main () {
    int SIZE = 5;
    //scanf("%d", &SIZE);
    int number[5] = {-2, -5, -1, 5, -1};

    // for (int i = 0; i < SIZE; i++) {
    //     scanf("%d", &number[i]);
    // }

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


    for (int i = 0; i < SIZE; i++) {
        printf("%d ", number[i]);
    }

    // printf("%d", sum);

    return 0;
}