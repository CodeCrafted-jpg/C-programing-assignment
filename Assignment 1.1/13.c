#include <stdio.h>

int main() {
    int n;
    double x, sum = 1.0, term = 1.0; /* term = x^k / k! */
    printf("Enter x and n (n>0): ");
    if (scanf("%lf %d", &x, &n) != 2 || n <= 0) {
        printf("Invalid input\n");
        return 1;
    }
    for (int k = 1; k < n; ++k) {
        term *= x / k;   
        sum += term;
    }
    printf("Approximation of e^%.6g using %d terms = %.15f\n", x, n, sum);
    return 0;
}
