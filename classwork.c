//write a program to calculate all mathematical oparators using simple function in c

#include <stdio.h>


int addition(int a, int b);
int subtraction(int a, int b);
int multiplication(int a, int b);
float divide(int a, int b);
int modulus(int a, int b);

int main() {
    int num1, num2, choice;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("\nChoose an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    printf("\nResult: ");

    switch (choice) {
        case 1:
            printf("%d + %d = %d\n", num1, num2, addition(num1, num2));
            break;
        case 2:
            printf("%d - %d = %d\n", num1, num2, subtraction(num1, num2));
            break;
        case 3:
            printf("%d * %d = %d\n", num1, num2, multiplication(num1, num2));
            break;
        case 4:
            if (num2 != 0)
                printf("%d / %d = %.2f\n", num1, num2, divide(num1, num2));
            else
                printf("Division by zero not possible.\n");
            break;
        case 5:
            if (num2 != 0)
                printf("%d %% %d = %d\n", num1, num2, modulus(num1, num2));
            else
                printf("Modulus by zero not possible.\n");
            break;
        default:
            printf("Invalid choice! Please select between 1 and 5.\n");
    }

    return 0;
}

int addition(int a, int b) {
    return a + b;
}

int subtraction(int a, int b) {
    return a - b;
}

int multiplication(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    return (float)a / b;
}

int modulus(int a, int b) {
    return a % b;
}
