#include <stdio.h>

    float sum (int sizeOfElement) {
        int i;

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

    float find_mean (float sumation, int number_of_values) {
        return sumation / number_of_values;
    }


    
int main() {
    int sizeOfElement;
    printf("enter size of data: ");
    scanf("%d", &sizeOfElement);

    float sumation;
    sumation = sum(sizeOfElement);
    printf("sumation = %.3f\n", sumation);

    float mean;
    mean = find_mean(sumation, sizeOfElement);
    printf("mean = %.3f", mean);

    return 0;
}