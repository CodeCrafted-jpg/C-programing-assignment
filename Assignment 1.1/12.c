#include <stdio.h>

int main() {
    int n;
    double pi = 0.0;
    printf("Enter n (n>0): ");
    if (scanf("%d", &n)!=1 || n <= 0) {
        printf("Invalid input\n");
        return 1;
    }
    for (int k = 0; k < n; ++k)
        pi += (k % 2 == 0 ? 1.0 : -1.0) / (2*k + 1);
    pi *= 4.0;
    printf("Approximation of pi using %d terms = %.15f\n", n, pi);
    return 0;
}
