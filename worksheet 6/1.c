// Q1. Write a C program to determine whether a driver is eligible for insurance or not
// by using logical operators. The program should accept the driver’s age, gender(M/F),
// and marital status (M/U) as input. The conditions for eligibility are as follows:
// • A married person is always insured.
// • An unmarried male is insured only if his age is greater than 30.
// • An unmarried female is insured only if her age is greater than 25.
// Your program should read the required inputs and then, by applying appropriate logical
// operators (&& and ||), decide whether the driver is insured or not. Display the output accordingly
// in the form of the message:
// • "Driver is insured" if the conditions are satisfied.
// • "Driver is not insured" otherwise.


#include <stdio.h>

int main() {
    int age;
    char gender; 
    char status; 
    int insured = 0;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your Gender (M for Male, F for Female): ");
    scanf(" %c", &gender); 

    printf("Enter your Marital Status (M for Married, U for Unmarried): ");
    scanf(" %c", &status);

    if (status == 'M') {
        insured = 1; 
    } 
    else if (status == 'U' && gender == 'M' && age > 30) {
        insured = 1; 
    } 
    else if (status == 'U' && gender == 'F' && age > 25) {
        insured = 1; 
    }

    if (insured) {
        printf("✅✅✅ Driver is insured\n");
    } else {
        printf("❌❌ Driver is not insured\n");
    }

    return 0;
}
