printf("input size: ");
    scanf("%d", &SIZE);
    for (int i = 0; i < SIZE - 2; i++) {
        int half_min = half - i, half_max = half + i;
        for (int j = 0; j < SIZE; j++) {
            if (j >= half_min && j <= half_max) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }