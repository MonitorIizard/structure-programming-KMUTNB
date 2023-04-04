#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct
{
    char id[16];
    char name[100];
    int price;
    int count;
    int sum;
} item;

void readFirstFile(char *fileName, item *items) {
    FILE *fptr;
    fptr = fopen(fileName, "r");
    char line[100];

    if (fptr == NULL)
    {
        printf("file invalid");
        exit(1);
    }
    else
    {
        int i = 0;
        while (fgets(line, sizeof(line), fptr) != NULL)
        {
            *(line + strlen(line) - 1) = '\0'; // บรรทัดสุดท้ายของเเต่ละรรทัดในไฟล์จะเป็น \n เราเปลี่ยนจาก \n เป็น \0

            char *token = strtok(line, " ");
            strcpy((*items).id, token);

            token = strtok(NULL, " ");

            char buf[4][100];
            int j = 0;

            while (token != NULL)
            {
                // printf("%d ", items[i].price);
                strcpy(buf[j], token);
                token = strtok(NULL, " ");
                j++;
            }

            strcpy(items -> name, j == 2 ? buf[0] : strcat(strcat(buf[0], " "), buf[1]));
            items -> price = atoi(buf[j - 1]);

            //printf("%s %s %d", items -> id, items -> name, items -> price);
            //printf("\n");
            items++;
        }
    }

    fclose(fptr);
}

void readSecondFile (char *filePath, item *items) {
    FILE *ptr;
    ptr = fopen(filePath, "r");
    int count[7];
    while (fscanf(ptr, "%d %d %d %d %d %d %d", &count[0], &count[1], &count[2], &count[3], &count[4], &count[5], &count[6]) != EOF) {
        for (int i = 0; i < 7; i++) {
            items -> count += count[i];
            //printf("%d", count[i]);
        }
        items -> sum = (items -> count) * (items -> price);
        //printf("%d\n", items -> sum);
        items++;
    }
    fclose(ptr);
}

void writeFile (char *fileName, item *items) {
    FILE *ptr;
    ptr = fopen(fileName, "w");
    while (strcmp(items -> id, "")) {
        fprintf(ptr, "%s %s %d %d\n", items -> id, items -> name, items -> price, items -> sum);
        items++;
    }

}

int main()
{
    char *firstFilePath = "product.txt";
    char *secondFilePath = "sale.txt";
    char *thirdFilePath = "report.txt";
    item items[100];
    readFirstFile(firstFilePath, items);
    readSecondFile(secondFilePath, items);
    writeFile(thirdFilePath, items);
    //printf("x%sx", items[99].id);
    return 0;
}
