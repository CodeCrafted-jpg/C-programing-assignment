// 8. Recursive solutions for the following problems:
// a. Factorial of a number?
// b. Display digits of a number from left to right (and right to left)?
// c. Compute xy using only multiplication?
// d. To print a sequence of numbers entered using sentinel controlled repetition in
// reverse order?
#include <stdio.h>


int factorial(int n) {
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

void leftToRight(int n) {
    if (n == 0)
        return;
    leftToRight(n / 10);
    printf("%d ", n % 10);
}


void rightToLeft(int n) {
    if (n == 0)
        return;
    printf("%d ", n % 10);
    rightToLeft(n / 10);
}


int power(int x, int y) {
    if (y == 0)
        return 1;
    return x * power(x, y - 1);
}


void reversePrint() {
    int n;
    scanf("%d", &n);

    if (n == -1)
        return;

    reversePrint();
    printf("%d ", n);
}

int main() {
    int choice, n, x, y;

    do {
        printf("\n--- Recursive Programs Menu ---\n");
        printf("1. Factorial of a number\n");
        printf("2. Display digits Left to Right\n");
        printf("3. Display digits Right to Left\n");
        printf("4. Compute x^y using recursion\n");
        printf("5. Sentinel controlled reverse print\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("Enter number: ");
            scanf("%d", &n);
            printf("Factorial = %d\n", factorial(n));
            break;

        case 2:
            printf("Enter number: ");
            scanf("%d", &n);
            printf("Digits Left to Right: ");
            leftToRight(n);
            printf("\n");
            break;

        case 3:
            printf("Enter number: ");
            scanf("%d", &n);
            printf("Digits Right to Left: ");
            rightToLeft(n);
            printf("\n");
            break;

        case 4:
            printf("Enter base (x): ");
            scanf("%d", &x);
            printf("Enter power (y): ");
            scanf("%d", &y);
            printf("Result = %d\n", power(x, y));
            break;

        case 5:
            printf("Enter numbers (-1 to stop):\n");
            reversePrint();
            printf("\n");
            break;

        case 6:
            printf("Exiting program...\n");
            break;

        default:
            printf("Invalid choice!\n");
        }

    } while (choice != 6);

    return 0;
}
