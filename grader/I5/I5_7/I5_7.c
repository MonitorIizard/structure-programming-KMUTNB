#include <stdio.h>
#include <math.h>

int main () {
    int x = 0, y = 0, _fuel = 0, _round = 0, _num = 0, _elec = 0;
    scanf("%d %d", &x, &y);
    scanf("%d %d", &_fuel, &_round);
    scanf("%d", &_num);
    int i, j, t = 0;

    for (i = 0; i < x; i++) {
        for (j = 0; j < y; j++) {
            scanf("%d", &t);
            _elec = _elec + t;
        }
    }

    int payment = 0, ticket = 0;
    payment = _elec + (_fuel * _round * _num);
    ticket = ceil(1.0 * payment/_num);
    printf("%d", ticket);

    return 0;
}