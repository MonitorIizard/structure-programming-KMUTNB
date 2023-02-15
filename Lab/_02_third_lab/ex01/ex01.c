#include <stdio.h>

int main() {
    int unit = 0;
    int amount = 0;
    float tax = 0.07;

    printf("Plese enter unit price : ");
    scanf("%d", &unit);

    printf("Please enter number : ");
    scanf("%d", &amount);

    float total = ((unit * amount) * tax + unit * amount) / 2 ;

    printf("Total amount : %.2f", total);

}