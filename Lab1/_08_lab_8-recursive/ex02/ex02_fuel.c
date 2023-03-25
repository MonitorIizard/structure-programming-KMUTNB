#include <stdio.h>

float fuelLeft(float fuel, int years) {
    if (years == 2545) {
        return fuel;
    } else {
        return 0.9 * fuelLeft(fuel, years - 1);
    }
}

int main () {
    float answer = fuelLeft(25000000, 2561);
    printf("answer = %f", answer);
    return 0;
}