#include <stdio.h>

int recursion(int number) {
    if (number == 1) {
        return 1;
    }

    if (number == 2) {
        return 1;
    }

    if (number == 3) {
        return 1;
    }

    return recursion(number - 2) + recursion(number - 3);
}

int main () {
    //ป้าเล่นพนันเเละลงเหรียญสูตรเเบบนี้ 1 1 1 2 2 3 4 5 7 9 12 ป้าต้องการจะรู้ว่า
    //ที่ลำดับที่ 12 จะมีค่าเท่ากับเท่าไหร ่16 = 49
    int number = 0;
    scanf("%d", &number);
    printf("%d", recursion(number));

    return 0;
}