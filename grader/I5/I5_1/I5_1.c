#include <stdio.h>
#include <math.h>

int main () {
    int size = 0;
    scanf("%d", &size);
    int n[size];
    float x_bar = 0;
    float _sum = 0;

    for (int i = 0; i < size; i++) {
        scanf("%d", &n[i]); //size
        x_bar += n[i];
    }

    x_bar = x_bar / size;

    for (int i = 0; i < size; i++) {
        _sum += pow((n[i] - x_bar), 2);
    } 

    float standard_deviation = pow((_sum) / (size - 1.0), 0.5 );

    printf("%.2f", standard_deviation);
    return 0;
}

//160 178 169 177 168