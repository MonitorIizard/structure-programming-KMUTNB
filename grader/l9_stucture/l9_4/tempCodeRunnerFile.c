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