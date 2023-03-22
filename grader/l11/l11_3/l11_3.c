#include <stdio.h>

typedef struct  
{
    int treeCount;
    int height[80];
} createLineSet;


int main() {
    int LINE = 1;
    scanf("%d", &LINE);
    createLineSet line[100];
    int answerSet[100];
    
    int treeCount = 0;

    for (int i = 0; i < LINE; i++) {
        int treeCount = 0;
        scanf("%d", &treeCount);
        line[i].treeCount = treeCount;
        // printf("%d", treeCount);

        for (int j = 0; j < treeCount; j++) {
            scanf("%d", &line[i].height[j]);
        }

        answerSet[i] = 1;
        int max = line[i].height[treeCount - 1];

        for (int k = treeCount - 1; k >= 0; k--) {
            if (max < line[i].height[k]) {
                max = line[i].height[k];
                answerSet[i] += 1;   
            }
        }
    }

    for (int i = 0; i < LINE; i++) {
        printf("%d\n", answerSet[i]);
    }
    return 0;
}