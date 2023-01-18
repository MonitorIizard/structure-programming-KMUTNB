#include <stdio.h>

int main () {
    int size = 5;
    // ! scanf("%d", &size);
    int n[size];
    int x_bar = 0;
    int _sum = 0;

    for (int i = 0; i < size; i++) {
        scanf("%d", &n[i]); //size
        x_bar += n[i];
    }

    x_bar /= size;

    for (int i = 0; i < size; i++) {
        _sum += pow((n[i] - x_bar), 2);
    } 

    return 0;
}