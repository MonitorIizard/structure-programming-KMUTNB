#include <stdio.h>

int A(int i) {
    if (i == 1) {
        return 1;
    } else {
        return i * A(i-1);
    }
}

int main () {
    int answer = A(5);
    printf("Answer = %d", answer);
}