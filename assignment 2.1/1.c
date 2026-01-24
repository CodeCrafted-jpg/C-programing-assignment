// 1. Design a modularized algorithm/program to check if a given positive integer number
// is a circular prime or not?

#include <stdio.h>

int isPrime(int n) {
    int i;
    if (n < 2) return 0;
    for (i = 2; i * i <= n; i++)
        if (n % i == 0)
            return 0;
    return 1;
}

int rotate(int n) {
    int last = n % 10;
    int temp = n / 10;
    int pow = 1;
    while (pow <= temp) pow *= 10;
    return last * pow + temp;
}

int isCircularPrime(int n) {
    int temp = n;
    do {
        if (!isPrime(temp))
            return 0;
        temp = rotate(temp);
    } while (temp != n);
    return 1;
}

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    if (isCircularPrime(n))
        printf("Circular Prime\n");
    else
        printf("Not Circular Prime\n");

    return 0;
}
