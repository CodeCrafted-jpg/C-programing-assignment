#include <stdio.h>

int main() {
    int num, sum = 0, r;

    printf("➡️  Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        r = num % 10;
        sum += r;
        num /= 10;              
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}
