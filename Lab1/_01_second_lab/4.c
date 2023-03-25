#include <stdio.h>

int main () {
    float commission = 5000.00, percent = 0.05;
    int no_of_day = 7;

    printf("rate: %8.2f%%\n", percent);
    printf("comm  %.2f\n", commission);
    printf("no.of day:%ddays", no_of_day);

    return 0;
}