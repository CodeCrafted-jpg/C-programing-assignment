// 3. Employee Salary Slip Generator (Functions + Array)
// Features:
// • Input salary for N employees
// • Use functions for:
// o DA, HRA, PF calculation
// o Net salary
// • Use array to store salaries
// • Pointer to iterate and update data
// Real use: Small business salary calculator.



#include <stdio.h>
#define MAX_EMP 100
double calcDA(double basic) {
    return 0.10 * basic;
}
double calcHRA(double basic) {
    return 0.20 * basic;
}
double calcPF(double basic) {
    return 0.12 * basic;
}
double calcNet(double basic) {
    double da = calcDA(basic);
    double hra = calcHRA(basic);
    double pf = calcPF(basic);
    return basic + da + hra - pf;
}
int main() {
    int n, i;
    double basic[MAX_EMP];
    double net[MAX_EMP];

    printf("Enter number of employees: ");
    if (scanf("%d", &n) != 1) return 0;

    if (n < 1 || n > MAX_EMP) {
        printf("Invalid number (1-%d)\n", MAX_EMP);
        return 0;
    }
    printf("Enter basic salary for each employee:\n");
    for (i = 0; i < n; i++) {
        printf("Employee %d basic: ", i + 1);
        scanf("%lf", basic + i);   
    }

    for (i = 0; i < n; i++) {
        *(net + i) = calcNet(*(basic + i)); 
    }

    printf("\n--- Salary Slips ---\n");
    for (i = 0; i < n; i++) {
        double b = *(basic + i);
        double da = calcDA(b);
        double hra = calcHRA(b);
        double pf = calcPF(b);
        double nett = *(net + i);

        printf("\nEmployee %d\n", i + 1);
        printf("Basic  : Rs %.2f\n", b);
        printf("DA (10%%)  : Rs %.2f\n", da);
        printf("HRA (20%%) : Rs %.2f\n", hra);
        printf("PF (12%%)  : Rs %.2f\n", pf);
        printf("Net Pay    : Rs %.2f\n", nett);
    }
    return 0;
}
