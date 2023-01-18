#include <stdio.h>

int main () {
    int set_of_number[4];
    int i, j, _temp;
    char trash;
    scanf("%d %d %d", &set_of_number[0], &set_of_number[1], &set_of_number[2]);
    for(i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            _temp = 0;
            if(set_of_number[i] < set_of_number[j]){
                _temp = set_of_number[i];
                set_of_number[i] = set_of_number[j];
                set_of_number[j] = _temp;
            }
        }
    }
    i = 0;
    char s[] = ""; 
    int order[4];

    scanf("%s", &s[1]);

    for(i = 1; i <= 3; i++){
        if(s[i] == 'A') {
            order[i] = 0;
        }
        if(s[i] == 'B') {
            order[i] = 1;
        }
        if(s[i] == 'C') {
            order[i] = 2;
        }
    }
    printf("%d %d %d", set_of_number[(int)order[0]],set_of_number[(int)order[1]],set_of_number[(int)order[2]]);
    return 0;
}