#include <stdio.h>

int ProfitCal (int i) {
    if (i == 0) {
        return 10000;
    } else {
        return ProfitCal(i - 1) +  (ProfitCal(i - 1) * 1.05);
    }
    
}

int main () {
    int LastCost = ProfitCal (2);
    printf("%d", LastCost);
    return 0;
}