#include <stdio.h>

typedef struct 
{
    char fileName[10];
    char title[10];
    char artist[10];
    char code[10];
    char issueDate[10];
    char company[10];
    int price;
    char key;
    int status;
} data;

// void inputData () {
    

// }

int main () {
    data first_album;
    printf("Please enter name of file : ");
    scanf("%s", first_album.fileName);
    
    do {
        printf("please enter the product code : ");
    scanf("%s", first_album.code);

    printf("Please enter product title : ");
    scanf("%s", first_album.title);


    printf("Please enter name of artist : ");
    scanf("%s", first_album.artist);

    printf("Please enter the issue date: ");
    scanf("%s", first_album.issueDate);

    printf("Please enter the company : ");
    scanf("%s", first_album.company);

    printf("Please enter the price : ");
    scanf("%d", &first_album.price);

    printf("Do you want to continue ('y/n') : ");
    first_album.key = getchar();
    if (first_album.key != 'y' || first_album.key != 'n') {
        first_album.key = getchar();
    }

    FILE *fptr;
    fptr = fopen(first_album.fileName, "a");
    char ch;
    //*write here 
    fprintf(fptr, "%s,%s,%s,%s,%s,%d\n",first_album.code, first_album.title, first_album.artist, first_album.issueDate, first_album.company, first_album.price);

    //*

    fclose(fptr);
    } while (first_album.key == 'y');

    return 0;
}