#include <stdio.h>

int main(){
    char name[20];
    char sex;
    int height = 0; 
    int weight = 0;
    int ideal_weight = 0;

    scanf("%s", name);
    scanf(" %c", &sex);
    scanf("%d", &height);
    scanf("%d", &weight);
    int standard = sex == 'f' ? 110 : 105;
    ideal_weight = height - standard;

    char word[] = ideal_weight > weight ? "underweight" : "overweight";

    printf("%s, your ideal weight is %d kg, you are %d kg %s", name, ideal_weight, ideal_weight - weight, word);
    return 0;
}