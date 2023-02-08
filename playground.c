#include <stdio.h>


int main() {
    // unsigned long A, B, C,AND, OR, XOR;
    // A = 0X0E;
    // B = 0X4C;
    // C = 5;

    // // c = 00101 => c = 01010

    // AND = A & B;
    // printf("%x\n",AND);

    // OR = A | B;
    // printf("A | B = %.8X\n", OR);

    // XOR = A ^ B;
    // printf("A^B = %.8X\n", XOR);

    // printf("c = %d", C<<1);

    int b = 0, n = 0;
    switch(b) {
    case 0:
        n = 1;
        break;
    case 1:
        n = 2;
        break;
    default:
        n = 0;
        break;  
    }

    printf("n = %d", n);
}