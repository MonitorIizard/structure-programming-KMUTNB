# include <stdio.h>
# include <math.h>

typedef struct 
{
    int x;
    int y;
} POINT;

int findDistance (POINT coordinate [], int n) {
    int distance = pow(pow(coordinate[0].x - coordinate[n - 1].x, 2) + pow(coordinate[0].y - coordinate[n - 1].y, 2) , 0.5);
    return distance;
}

int findQuadrant(int x, int y) {
    int quardrant = 0;
    if (x > 0 && y > 0) {
            quardrant = 1;
        } else if (x < 0 && y > 0) {
            quardrant = 2;
        }  else if (x < 0 && y < 0) {
            quardrant = 3;
        } else {
            quardrant = 4;
        }
    return quardrant;
}

int main () {
    POINT coordinate[100];
    int n = 0;
    
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &coordinate[i].x, &coordinate[i].y);
    }

    for (int i = 0; i < n; i++) {
        int x = coordinate[i].x;
        int y = coordinate[i].y;
        printf("%d\n", findQuadrant(x ,y));
    }

    printf("%d", findDistance(coordinate, n));
    return 0;
}