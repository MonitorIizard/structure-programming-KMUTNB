#include <stdio.h>

int main () {
    //int minute[4][2];
    int minute[4][2] = {{50,20},{60, 70}, {40, 30}, {50, 50}};

    int sum = 0;
    for (int i = 0; i < 4; i++ ){
        for (int j =0; j < 2; j++) {
            sum += minute[i][j];
        }
    }

    printf("%d", sum);

    // เติมเงิน กลางวัน 0.75 กลางคืน 1.25
    // 300 , 500 นาที เกิน 1.5 บาท
    // 600 , 1200 นาที เกิน 1.25 บาท
    // หาว่่าอะไรถูกสุด

    return 0;
}