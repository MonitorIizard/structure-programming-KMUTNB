#include <stdio.h>

int main() {
    
    int i;
    int sizeOfElement = 2;
    float number[sizeOfElement];

    printf("enter size of data: ");
    scanf("%d", &sizeOfElement);

    for(i = 0; i < sizeOfElement; i++){
        scanf("%f", &number[i]);
    }

    float sum = 0;

    for(int j = 0; j < sizeOfElement; j++){
        sum = sum + number[j];
    }



    return 0;
}