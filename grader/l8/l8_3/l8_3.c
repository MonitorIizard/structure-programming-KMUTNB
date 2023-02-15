#include <stdio.h>

void reverse (char *c) {
    // now *c represent value from that position
    printf("%s", c);
}

int main () {
    char messege[999] = "Computer Programming";
    char answer[999];
    char *m = &messege;
    printf("%s", &m);
    //reverse(messege);
    return 0;
}