#include <stdio.h>

int cal_sum(int number) {
    if (number == 0) {
        return number;
    }

    return cal_sum(number - 1);
}

int main () {

    return 0;
}