// Q2. Write a Program to take user input and calculate the Compound Interest.
// Formula to calculate compound interest annually is given by:
// Amount= P(1 + R/100)t
// Compound Interest = Amount - P
// Where,
// P is principal amount
// R is the rate and
// T is the time span




#include <stdio.h>
#include <math.h>  

int main() {
    double P, R, T, Amount, CI;

 
    printf("Enter the Principal amount: ");
    scanf("%lf", &P);

    printf("Enter the Rate of Interest: ");
    scanf("%lf", &R);

    printf("Enter the Time (in years): ");
    scanf("%lf", &T);

  
    Amount = P * pow((1 + R / 100), T);
    CI = Amount - P;

    
    printf("\nPrincipal Amount = %.2lf", P);
    printf("\nRate of Interest = %.2lf", R);
    printf("\nTime (in years) = %.2lf", T);
    printf("\nCompound Amount = %.2lf", Amount);
    printf("\nCompound Interest = %.2lf\n", CI);

    return 0;
}
