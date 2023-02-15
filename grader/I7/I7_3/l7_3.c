#include <stdio.h>

int cal_fibonacci (int number) {
    printf("hello %d\n", number);
    if (number == 1) {
        return 1;
    }

    if (number == 0) {
        return 0;
    }

    return cal_fibonacci(number - 1) + cal_fibonacci(number - 2);
}

int main () {
    int number = 0;
    scanf("%d", &number);
    int x = cal_fibonacci(number);
    printf("%d", x);
    return 0;
}