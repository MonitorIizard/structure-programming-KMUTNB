#include <stdio.h>

int main () {
    float farenheit_temp1, farenheit_temp2, farenheit_temp3 = 0.0;
    float celsius_temparature1, celsius_temparature2, celsius_temparature3 = 0.0;

    scanf("%f %f %f", &farenheit_temp1 ,&farenheit_temp2, &farenheit_temp3);
    celsius_temparature1 = 5.0 * ((farenheit_temp1 - 32.0) / 9.0);
    celsius_temparature2 = 5.0 * ((farenheit_temp2 - 32.0) / 9.0);
    celsius_temparature3 = 5.0 * ((farenheit_temp3 - 32.0) / 9.0);

    printf("%.2f %.2f %.2f", celsius_temparature1, celsius_temparature2, celsius_temparature3);
    return 0;
}