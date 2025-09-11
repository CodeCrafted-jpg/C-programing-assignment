// Q2. Write a C program to determine whether a person is eligible for a loan and
// calculate the loan amount based on certain conditions. The program should accept
// the applicant’s age, employment status (E for employed / S for self-employed / U for
// unemployed), monthly income, and credit score as input.
// The rules for loan approval are as follows:
// 1. If the applicant is unemployed, they are not eligible for a loan.
// 2. If the applicant is employed (E) and age > 21 with a credit score above 650, they are
// eligible for a loan amount equal to 10 times their monthly income.
// 3. If the applicant is self-employed (S) and age > 25 with a credit score above 700, they are
// eligible for a loan amount equal to 12 times their monthly income.
// 4. Otherwise, the applicant is not eligible for a loan.
// The program should display either the loan amount sanctioned or the message "Loan not
// approved" accordingly.



#include <stdio.h>

int main() {
    int age, income, credit, loan = 0;
    char status;
    int Status_Input = 0;

    printf("Enter Your age: ");
    scanf("%d", &age);
    printf("Enter Your Monthly income: ");
    scanf("%d", &income);
    printf("Enter Your Credit: ");
    scanf("%d", &credit);

    printf("Enter (E for employed / S for self-employed / U for unemployed): ");
    scanf(" %c", &status);

    if (status == 'U') {
        Status_Input = 0;
    } else if (status == 'E' && age > 21 && credit > 650) {
        Status_Input = 1;
        loan = income * 10;
    } else if (status == 'S' && age > 25 && credit > 700) {
        Status_Input = 1;
        loan = income * 12;
    }

    if (Status_Input == 1) {
        printf("✅ Loan approved. Loan amount: %d\n", loan);
    } else {
        printf("❌ Loan Not Approved\n");
    }

    return 0;
}
