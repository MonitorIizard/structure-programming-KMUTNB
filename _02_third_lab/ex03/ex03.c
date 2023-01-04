#include <stdio.h>

int main () {
    int thousand = 0;
    int five_hundred = 0;
    int one_hundred = 0;
    int fifty_bath = 0;
    int twenty_bath = 0;
    int ten_bath = 0;
    int one_bath = 0;

    int amount = 0;

    scanf("%d", &amount);

    thousand = amount / 1000;
    amount = amount - (thousand * 1000);

    five_hundred = amount / 500;
    amount = amount - (five_hundred * 500);

    one_hundred = amount / 100;
    amount = amount - (one_hundred * 100);

    fifty_bath = amount / 50;
    amount = amount - (fifty_bath * 50);

    twenty_bath = amount / 20;
    amount = amount - (twenty_bath * 20);

    ten_bath = amount / 10;
    amount = amount - (ten_bath * 10);

    one_bath = amount;

    printf("%d %d %d %d %d %d %d",thousand, five_hundred, one_hundred, fifty_bath, twenty_bath,ten_bath, one_bath);
    return 0;
}