#include <stdio.h>

    float do_loop_input (int sizeOfArray) {
        int i;
        int sizeOfElement;
        printf("enter size of data: ");
        scanf("%d", &sizeOfElement);

        float number[sizeOfElement];
        for(i = 0; i < sizeOfElement; i++){
            scanf("%f", &number[i]);
        }
        return  number[];
    }

    float find_sum (float numbers_array[]) {
        float sum = 0;
        for(int j = 0; j < sizeof(numbers_array); j++){
            sum = sum + numbers_array[j];
        }
        return sum;
    }

    float find_mean (float sumation, int number_of_values) {
        return sumation / number_of_values;
    }

    float find_standard_deviation (float mean, float number_array,int number_of_values) {

    }


    
int main() {
    
    

    float sumation;
    sumation = find_sum(sizeOfElement);
    printf("sumation = %.3f\n", sumation);

    float mean;
    mean = find_mean(sumation, sizeOfElement);
    printf("mean = %.3f", mean);

    float standard_deviation;
    // standard_deviation = find_standard_deviation(mean, number , sizeOfElement);

    return 0;
}