
#include <stdio.h>
#include "myMath.h"

int main(void) {
    int x = 12;
    int y = 4;

    printf("x = %d, y = %d\n", x, y);
    printf("add = %d\n", add(x, y));
    printf("subtract = %d\n", subtract(x, y));
    printf("multiply = %d\n", multiply(x, y));
    printf("divide = %.2f\n", divide_ints(x, y));

    return 0;
}
  