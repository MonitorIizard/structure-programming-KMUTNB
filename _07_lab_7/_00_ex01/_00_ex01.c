#include <stdio.h>

int arr[20];

void ran(int i) {
    arr[i] = rand() % 100;
    printf("%d\n", arr[i]);
}

void ran_v2(int *p_arr, int i) {
    p_arr[i] = rand() % 100;
    printf("%d\n", p_arr[i]);
}

int main () {
    srand(time(NULL));

    int arr_v2[20];

    int i = 0;
    for(i = 0; i < 20; i++) {
        ran_v2(arr_v2,i);
    }

    for(i = 0; i < 20; i++) {
        printf("%d\n", arr_v2[i]);
    }
    return 0;
}