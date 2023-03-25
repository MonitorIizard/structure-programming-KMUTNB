#include <stdio.h>

typedef struct {
    char p[100];
    char n[100];
    int price;
} createDataSet;

typedef struct
{
    int amount1,amount2, amount3,amount4, amount5; 
} amont;


int main () {
    createDataSet _data[100];
    FILE *fptr;
    fptr = fopen("product.txt", "r");

    if (fptr == NULL) {
        printf("error");
    }    
    
    int row = 0;
    while ( fscanf(fptr, "%s %s %d", _data[row].p, _data[row].n, &_data[row].price) == 1) {
        printf("%d", _data[row].price);
        row++;
    };
    //printf("\n%d\n", i);
    fclose(fptr);
    printf("hello world ");

    return 0;
}