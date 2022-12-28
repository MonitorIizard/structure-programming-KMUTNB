#include <stdio.h>

    float sum () {
        int i;
        int sizeOfElement;
    
        printf("enter size of data: ");
        scanf("%d", &sizeOfElement);

        float number[sizeOfElement];

        for(i = 0; i < sizeOfElement; i++){
            scanf("%f", &number[i]);
        }

        float sum = 0;

        for(int j = 0; j < sizeOfElement; j++){
            sum = sum + number[j];
        }

        return sum;
    }

    
    
int main() {

    float sumation;
    sumation = sum();
    printf("sumation = %.3f", sumation);

    return 0;
}