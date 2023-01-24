#include <stdio.h>
#include <math.h>

int main() {
    int A = 0, B = 0;
    int M = 0, N = 0;

    scanf("%d %d", &A, &B);
    scanf("%d %d", &M, &N);
    
    if((M > 0 && A <= 0) || (N > 0 && B <= 0)) {
        printf("Unable to finish order");
        return 0;
    } 

    int big_table_per_day = A * 6;
    int small_table_per_day = B * 10;

    int day_for_big = ceil((float)M / big_table_per_day);
    int day_for_small = ceil((float)N / small_table_per_day); 

    if (A == 0 && M == 0) {
        day_for_big = 0;
    }

    if (B == 0 && N == 0) {
        day_for_small = 0;
    }

    if (day_for_big < day_for_small) {
        printf("%d", day_for_small);
    } else {
        printf("%d", day_for_big);   
    }

    return 0;
}