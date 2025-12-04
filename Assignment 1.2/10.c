#include <stdio.h>
#include <math.h>

int main() {
    int num, temp, digit, count = 0;
    int sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    temp = num;

    while (temp > 0) {
        count++;
        temp = temp / 10;
    }
    temp = num;
    
    while (temp > 0) {
        digit = temp % 10;
        sum += pow(digit, count);
        temp = temp / 10;
    }
    if (sum == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is NOT an Armstrong number.\n", num);

    return 0;
}
