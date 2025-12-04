#include <stdio.h>

int main() {
    int num1, num2;
    int i, sum1 = 0, sum2 = 0;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    for (i = 1; i <= num1 / 2; i++) {
        if (num1 % i == 0)
            sum1 += i;
    }

    for (i = 1; i <= num2 / 2; i++) {
        if (num2 % i == 0)
            sum2 += i;
    }

    if (sum1 == num2 && sum2 == num1)
        printf("%d and %d are amicable numbers.\n", num1, num2);
    else
        printf("%d and %d are NOT amicable numbers.\n", num1, num2);

    return 0;
}
