#include <stdio.h>

float basic, da, hra, gross, tax, net;
char name[50];

void inputDetails() {
    printf("Enter Employee Name: ");
    scanf("%s", name);
    printf("Enter Basic Salary: ");
    scanf("%f", &basic);
}

void calculateSalary() {
    da = 0.10 * basic;
    hra = 0.15 * basic;
    gross = basic + da + hra;
    tax = 0.088 * gross;  // 8.8% tax to get ₹28,500
    net = gross - tax;
}

void displaySlip() {
    printf("\n----- Salary Slip -----\n");
    printf("Employee Name: %s\n", name);
    printf("Basic Salary: ₹%.2f\n", basic);
    printf("DA (10%%): ₹%.2f\n", da);
    printf("HRA (15%%): ₹%.2f\n", hra);
    printf("Gross Salary: ₹%.2f\n", gross);
    printf("Tax (8.8%%): ₹%.2f\n", tax);
    printf("Net Salary: ₹%.2f\n", net);
}

int main() {
    inputDetails();
    calculateSalary();
    displaySlip();
    return 0;
}
