#include <stdio.h>

int main() {
    int x = 1, y = 2;
    int a[10] = {0, 1, 2, 3, 4, 5, 6 ,7 , 8, 9};
    int *ip, *iq;
    ip = &x;
    y = *ip;
    *ip = 0;
    ip = &a;
    ip = ip + 3;
    *ip = 0;
    *ip = *ip + 10;
    iq = ip;
    *iq = 0;
    
    return 0;
}