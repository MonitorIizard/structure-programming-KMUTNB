#include <stdio.h>
#include <math.h>

int main () {
    int code = 78818095;
    //scanf("%d", &code);
    int sum = 0;

    for (int i = 1; i <= 10; i++) {
        int first_digit = (code / pow(10, 9 - i + 1));
        //printf("%d\n", first_digit * (10-i + 1) );
        sum += ((10 - i + 1) * first_digit);
        code -= (pow(10, 9-i + 1) * first_digit);
    }

    //printf("sum = %d", sum);
    if (sum % 11 == 0 && sum != 0) {
        printf("valid\n");
    } else {
        printf("invalid\n");
    }

    return 0;
}