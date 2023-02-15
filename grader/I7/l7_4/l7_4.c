#include <stdio.h>

int cal_sum(int number) {
    if (number == 1) {
        return 1;    
    } else {
        return number + cal_sum(number - 1);
    }
}

int main () {
    int number = 0;
    scanf("%d", &number);
    int x = cal_sum(number);
    printf("%d", x);
    return 0;
}