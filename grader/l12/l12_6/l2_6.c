#include <stdio.h>

int main () {
    int size = 6;
    int number[6] = {3 ,5, 2, 5, 5, 5};

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (number[i] < number[j]) {
                int temp = number[i];
                number[i] = number[j];
                number[j] = temp;
            }
        }
    }

    // for (int i = 0; i < size; i++) {
    //     printf("%d", number[i]);
    // }
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (number[i] == number[size - 1]) {
            count += 1;
        }
    }

    printf("%d %d", number[size - 1], count);
    return 0;
}