#include <stdio.h>

int cal_sum(int number) {
    
    if (number != 0) {
        printf("%d\n", number);
        return number;
    }

    return cal_sum(number - 1) + cal_sum(number);
}

int main () {
    int x = cal_sum(5);
    printf("%d", x);
    return 0;
}