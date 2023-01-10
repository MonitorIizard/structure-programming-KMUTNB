#include <stdio.h>

int main () {
    // int set_of_number[3];
    // int i, j, temp;
    // scanf("%d %d %d", &set_of_number[0], &set_of_number[1], &set_of_number[2]);

    // for(i = 0; i < 3; i++) {
    //     for (j = 0; j < 3; j++) {
    //         temp = 0;
    //         if(set_of_number[i] < set_of_number[j]){
    //             temp = set_of_number[i];
    //             set_of_number[i] = set_of_number[j];
    //             set_of_number[j] = temp;
    //         }
    //     }
    // }
    int i = 0;
    char s[4]; 
    int order[3];

    scanf("%c%c%c", &s[0], &s[1], &s[2]);

    for(i = 0; i < 3; i++){
        // if(s[i] == 'A') {
        //     order[i] = 1;
        //     printf("A");
        // }
        // if(s[i] == 'B') {
        //     order[i] = 2;
        //     printf("B");
        // }
        // if(s[i] == 'C') {
        //     order[i] = 3;
        //     printf("C");
        // }
        printf("%c", s[i]);
    }

    //printf("%d %d %d", set_of_number[(int)order[0]],set_of_number[(int)order[1]],set_of_number[(int)order[2]]);
    return 0;
}