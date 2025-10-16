#include <stdio.h>
#include <math.h> 


float simpleInterest(float principal, float rate, float time);
float compoundInterest(float principal, float rate, float time);

float simpleInterest(float principal, float rate, float time) {
    return (principal * rate * time) / 100.0;
}


float compoundInterest(float principal, float rate, float time) {
    float amount = principal * pow((1 + rate / 100.0), time);
    return amount - principal;
}

int main() {
    float principal, rate, time, result;
    int choice;

    printf("Enter Principal amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of interest (in %%): ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &time);

    printf("\nChoose the type of interest to calculate:\n");
    printf("1. Simple Interest\n");
    printf("2. Compound Interest\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            result = simpleInterest(principal, rate, time);
            printf("\nSimple Interest = %.2f\n", result);
            printf("Total Amount = %.2f\n", principal + result);
            break;

        case 2:
            result = compoundInterest(principal, rate, time);
            printf("\nCompound Interest = %.2f\n", result);
            printf("Total Amount = %.2f\n", principal + result);
            break;

        default:
            printf("\nInvalid choice! Please select 1 or 2.\n");
    }

    return 0;
}



