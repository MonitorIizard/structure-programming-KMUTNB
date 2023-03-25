#include <stdio.h>

float cal (int year) {
    if(year == 2564) {
        return 25;
    }
    else {
        // float useBarrel = currentBarrel * 0.1;
        // int nextYear = year - 1;
        // float remain = currentBarrel - useBarrel;
        int nextYear = year - 1;
        return cal(nextYear) - (cal(nextYear) * 0.1);
    }
}

int main () {

    printf("%f", cal(2565));
    return 0;
}