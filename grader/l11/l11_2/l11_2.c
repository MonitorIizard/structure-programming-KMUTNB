#include <stdio.h>
#include <math.h>

typedef struct {
    float x, y, z;
} createCoordinateSet;

float calDistance (createCoordinateSet a, createCoordinateSet b) {
    float distance = sqrt(pow((a.x - b.x),2) + pow((a.y - b.y),2) + pow((a.z - b.z),2));
    return distance;
}

int main () {
    createCoordinateSet coordinate[100];
    int SIZE = 8;
    float distance[1000];
    scanf("%d", &SIZE);

    for (int i =0; i < SIZE; i++) {
        scanf("%f %f %f", &coordinate[i].x ,&coordinate[i].y ,&coordinate[i].z);
    }

    int k = 0;
    for (int i = 0; i < SIZE; i++) {
        for (int j = i; j < SIZE; j++) {
            distance[k] = calDistance(coordinate[i], coordinate[j]);
            k += 1;
        }
    }

    for (int i = 0; i < k; i++) {
        for (int j = 0; j < k ; j++) {
            if (distance[i] > distance[j]) {
                float temp = distance[i];
                distance[i] = distance[j];
                distance[j] = temp;
                //printf("%f", distance[j]);
            }
        }

    }

    for (int i = 0; i < 3; i++) {
        printf("%.2f\n",distance[i]);
    }

    return 0;
}