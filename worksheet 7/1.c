// Develop a program to solve simple computational problems
// using arithmetic expressions and the use of each operator
// leading to the simulation of a commercial calculator. (No builtin math function). Use switch case for input choice -e.g
// switch(choice).
// SampleEnter two values
// 2
// 3
// enter your choice
// 1.Addition
// 2.Subtraction
// 3.Multiplication
// 4.Division
// 5.Modulus
// 1
// The Result = 5




#include <stdio.h>

int main() {
    int choice;
    int a, b;  
    int result; 
    float res;  

    printf("Enter two values:\n");
    scanf("%d %d", &a, &b);

    printf("\nEnter your choice:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            result = a + b;
            printf("The Result = %d\n", result);
            break;

        case 2:
        if(a>b){
          result = a - b;
            printf("The Result = %d\n", result);  
        }
        else{
            printf("a must be bigger than b");
        }
            
            break;

        case 3:
            result = a * b;
            printf("The Result = %d\n", result);
            break;

        case 4:
            if(b != 0) {
                res = (float)a / b;
                printf("The Result = %.2f\n", res);
            } else {
                printf("Error: Division by zero not allowed.\n");
            }
            break;

        case 5:
            if(b != 0) {
                result = a % b;
                printf("The Result = %d\n", result);
            } else {
                printf("Error: Modulus by zero not allowed.\n");
            }
            break;

        default:
            printf("Invalid choice! Please select 1–5.\n");
    }

    return 0;
}
