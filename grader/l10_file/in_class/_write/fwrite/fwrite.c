#include <stdio.h>

struct  student {
    char name[10];
    char id[16];
    float gpa;
};

int main () {
    struct student student1 = {"Mok Maard", "650", 3.00};
    FILE *wptr;
    wptr = fopen("../../data.txt", "w");

    fwrite(&student1, sizeof(student1), 1, wptr);

    fclose(wptr);
    return 0;
}