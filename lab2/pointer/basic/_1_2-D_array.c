#include <stdio.h>

int main () {
    int marks[5][3] = { { 98, 76, 89},
                    { 81, 96, 79},
                    { 88, 86, 89},
                    { 97, 94, 99},
                    { 92, 81, 59}
                  };

    printf("%d", *(&marks[0][0] + 1));

    return 0;
}