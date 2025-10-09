//write a program to calculate all mathematical oparators using simple function in c

#include <stdio.h>


int addition(int a, int b);
int subtraction(int a, int b);
int multiplication(int a, int b);
float divide(int a, int b);
int modulus(int a, int b);

int main() {
    int num1, num2;
    
  
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    printf("\nResults:\n");
    printf("Addition: %d + %d = %d\n", num1, num2, addition(num1, num2));
    printf("Subtraction: %d - %d = %d\n", num1, num2, subtraction(num1, num2));
    printf("Multiplication: %d * %d = %d\n", num1, num2, multiplication(num1, num2));

    if (num2 != 0) {
        printf("Division: %d / %d = %.2f\n", num1, num2, divide(num1, num2));
        printf("Modulus: %d %% %d = %d\n", num1, num2, modulus(num1, num2));
    } else {
        printf("Division and modulus not possible\n");
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
