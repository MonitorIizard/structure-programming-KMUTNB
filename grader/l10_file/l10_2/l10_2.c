# include <stdio.h>

typedef struct {
    int code;
    char name[15];
    float price;
    int quantity;
}list;

int main() {
    FILE  *fptr;
    list data[3];
    
    fptr = fopen("input.txt", "r");

    for (int i = 0; i < 3; i++ ){
        int check_read = fscanf(fptr, "%d %s %f %d", &data[i].code, data[i].name, &data[i].price, &data[i].quantity);
        printf("%d, %s, %f, %d\n", data[i].code, data[i].name, data[i].price, data[i].quantity);
    }

    int code;

    scanf("%d", &code);

    int price = 0;

    for (int i = 0; i < 3; i++ ){
        if (code == data[i].code) {
            printf("%.2f", data[i].price);
            price = data[i].price;
            break;
        }
    }

    int quantity;
    scanf("%d\n", &quantity);

    int total_price = quantity * price;

    printf("total price = %d", total_price);

    fclose(fptr);

    return 0;
}