#include <stdio.h>
#include <string.h>
//create
struct student
{
    char name[30];
    char surname[50];
    int ID;
};

int main () {
    //usage
    struct student first_student = {"mok", "maard", "15"};
    printf("first student %s\n", first_student.name );

    strcpy(first_student.name, "mok");

    printf("%s %s %d", first_student);

    return 0;
}