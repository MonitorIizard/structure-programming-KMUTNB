// #include <stdio.h>
// #include <string.h>

// typedef struct {
//     char id[100];
//     char productName[100];
//     int cost;

// }createProductStruct;

// int main () {
//     createProductStruct productFile[100];
//     FILE *fptr;
//     fptr = fopen("product.txt", "r");

//     char buf1[100];
//     char buf2[100];
//     char buf3[100];
//     int buf4;
//     int i = 0;

//     printf("%d\n", fscanf(fptr, "%s %s %s %d", buf1, buf2, buf3, &buf4));
//     while (fscanf(fptr, "%s %s %s %d", buf1, buf2, buf3) > 0) {
//         //printf("%d\n", fscanf(fptr, "%s %s %s %d", buf1, buf2, buf3, &buf4));
//         if (fscanf(fptr, "%s %s %s %d", buf1, buf2, buf3, &buf4) == 4) {
//             char *ptr;
//             ptr = buf2;

//             char *ptr2;
//             ptr2 = buf1;

//             int j = 3;
//             while (*ptr != '\0') {
//                 ptr += 1;
//                 ptr2 = ptr2 + j;
//                 //*ptr2 = *ptr;
//                 printf("%c", *ptr);
//                 j += 1;
//             }
//             //strcpy(productFile[i].productName, buf1);
//             printf("productName = %s", buf1);
//         }
//         else {

//         }
//         //strcpy(productFile[i].name, buf);
//         //printf("%s\n", buf1);
//         // printf("%d\n", buf4);
//     }
        

//     // printf("%p", fptr);

//     fclose(fptr); 

//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ITEMS 100

struct item {
    char id[10];
    char name[100];
    int price;
};

int main() {
    FILE *fp;
    char line[200];
    struct item items[MAX_ITEMS];
    int i = 0;

    fp = fopen("product.txt", "r");
    if (fp == NULL) {
        printf("Error: unable to open file\n");
        exit(1);
    }

    while (fgets(line, sizeof(line), fp) != NULL) {
        char *token = strtok(line, " ");
        strcpy(items[i].id, token);
        token = strtok(NULL, " ");
        while (token != NULL) {
            if (items[i].price == 0) {
                items[i].price = atoi(token);
            } else {
                strcat(items[i].name, token);
                strcat(items[i].name, " ");
            }
            token = strtok(NULL, " ");
        }
        items[i].name[strlen(items[i].name) - 1] = '\0'; // remove the last space
        i++;
    }

    fclose(fp);

    // print the items
    for (int j = 0; j < i; j++) {
        printf("%s %s %d\n", items[j].id, items[j].name, items[j].price);
    }

    return 0;
}
