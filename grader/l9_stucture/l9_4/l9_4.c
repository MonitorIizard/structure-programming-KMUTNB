#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char face[3];
    char suits;
} createDeck;

// char ExchangeAlphabet() {
    

//     return 
// }

int main () {
    createDeck deck[52];
    createDeck temp;
    int SIZE = 2;

    scanf("%d", &SIZE);

    for (int i = 0; i < SIZE; i++) {
        scanf("%s %c", deck[i].face, &deck[i].suits);
        if (deck[i].face[0] == 'A') {
            deck[i].face[0] = '1';
        }

        if (deck[i].face[0] == 'J') {
            strcpy(deck[i].face, "11");
        }

        if (deck[i].face[0] == 'Q') {
            strcpy(deck[i].face, "12");
        }

        if (deck[i].face[0] == 'K') {
            strcpy(deck[i].face, "13");
        }

        //printf("%d %c", atoi(deck[0].face), deck[0].suits);
    }


    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (atoi(deck[i].face)< atoi(deck[j].face)) {
                temp = deck[i];
                deck[i] = deck[j];
                deck[j] = temp;
                //printf("temp = %s %c\n", temp.face, temp.suits);
            }
        }
    }

    int sum = 0;

    for (int i = 0; i < SIZE; i++) {
        sum += atoi(deck[i].face);
    }

    for (int i = 0; i < SIZE; i++) {
        if (!strcmp(deck[i].face, "1")) {
            strcpy(deck[i].face, "A");
        }

        if (!strcmp(deck[i].face, "11")) {
            strcpy(deck[i].face, "J");
        }

        if (!strcmp(deck[i].face, "12")) {
            strcpy(deck[i].face, "Q");
        }

        if (!strcmp(deck[i].face, "13")) {
            strcpy(deck[i].face, "K");
        }

        if (i == 0) {
            printf("%s-%c,", deck[i].face, deck[i].suits);
        } else if (i == SIZE - 1) {
            printf(" %s-%c\n", deck[i].face, deck[i].suits);
        } else {
            printf(" %s-%c,", deck[i].face, deck[i].suits);
        }
    }

    printf("%d", sum);

    return 0;
}