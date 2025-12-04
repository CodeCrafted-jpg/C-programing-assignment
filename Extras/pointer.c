#include <stdio.h>

int* check(int i, int j){
    int *p, *q;

    p = &i;
    q = &j;

    if(i >= 45) {
        return p;
    } else {
        return q;
    }
}

int main() {
    int *c;

    c = check(10, 20);

    printf("%u\n", c);  

    return 0;
}
