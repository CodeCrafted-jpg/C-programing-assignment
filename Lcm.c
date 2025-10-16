#include <stdio.h>

// Function to find GCD
int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


int findLCM(int a, int b) {
    return (a * b) / findGCD(a, b);
}

int main() {
    int num1, num2, choice;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    printf("\nChoose an operation:\n");
    printf("1. Find GCD\n");
    printf("2. Find LCM\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    
    switch (choice) {
        case 1:
            printf("GCD of %d and %d = %d\n", num1, num2, findGCD(num1, num2));
            break;
        case 2:
            printf("LCM of %d and %d = %d\n", num1, num2, findLCM(num1, num2));
            break;
        default:
            printf("Invalid choice! Please enter 1 or 2.\n");
    }
    
    return 0;
}
