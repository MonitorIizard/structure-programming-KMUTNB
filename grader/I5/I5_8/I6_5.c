#include <stdio.h>
#include <math.h>

int main() {
    int round = 0;
    scanf("%d", &round);

    float x[round];
    float y[round];



    // float x[8] = {-1 ,3, 1, 4, 2, 4, 2, -1};
    // float y[8] = {3 ,3 , 1, 2, 0.5, -0.5, -1, -1};

    int i = 0;
    int j = 0;

    for (i = 0; i <  round; i++) {
        scanf("%f %f", &x[i], &y[i]);
    }

    float distance = 0;
    float less_distance = 99;

    int tempi = 0;
    int tempj = 0;

    for (i = 0; i < round; i++) {
        for (j = 0; j < round; j++) {
            if (i == j) {
                continue;
            }
            distance = pow(pow(x[i]-x[j], 2) + pow(y[i]-y[j], 2) , 0.5);  
            //printf("%.2f\n", distance);

            if(less_distance >= distance ) {
                less_distance = distance;
                tempi = i;
                tempj = j;
            } 
        }
    }

    printf("%d %d %.2f", tempj + 1, tempi + 1, less_distance);
    return 0;
}