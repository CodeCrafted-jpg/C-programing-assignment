#include <stdio.h>
#include <math.h>

int main() {
    int n;
    double x;
    printf("Enter x (radians) and n (n>0): ");
    if (scanf("%lf %d", &x, &n) != 2 || n <= 0) { puts("Invalid input"); return 1; }

    const double PI = 3.14159265358979323846;
    x = fmod(x, 2*PI);                /* improve convergence */

    double sum_sin = x, sum_cos = 1.0;
    double term_sin = x, term_cos = 1.0;

    for (int k = 1; k < n; ++k) {
        term_sin *= -x*x / (2.0*k * (2.0*k + 1.0));   /* next sin term */
        sum_sin += term_sin;
        term_cos *= -x*x / ((2.0*k - 1.0) * (2.0*k)); /* next cos term */
        sum_cos += term_cos;
    }

    if (fabs(sum_cos) < 1e-15) { puts("cos(x) is too close to zero"); return 2; }

    printf("Approx tan(x) using %d terms = %.15f\n", n, sum_sin / sum_cos);
    return 0;
}
