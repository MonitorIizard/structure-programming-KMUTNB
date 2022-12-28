#include <stdio.h>
#include <math.h>

int main() {

    char first_student[10], second_student[10];
    float height_first = 0, height_second = 0;

    printf("Please enter name and height of the first student : ");

    scanf("%s %f", first_student, &height_first);

    printf("Please enter name and height of the second student : ");

    scanf("%s %f", second_student, &height_second);

    printf("%s is taller than %s = %7.2f\n", first_student, second_student, height_first - height_second);

    return 0;
}