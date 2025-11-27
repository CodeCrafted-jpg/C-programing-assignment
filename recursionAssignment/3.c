// 3. Write a recursive function long factorial(int n) that returns the factorial of n.
// Then write another function void storeFactorial(int n, long *result) that calls
// the recursive factorial function and stores the result in the pointer variable.


#include <stdio.h>


long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;     
    }
    return n*factorial(n - 1);
}

void storeFactorial(int n, long *result) {
    *result = factorial(n);   
}

int main() {
    int num;
    long ans;

    printf("Enter a number:");
    scanf("%d", &num);

    storeFactorial(num, &ans);

    printf("Factorial of %d is %ld \n", num, ans);

    return 0;
}
