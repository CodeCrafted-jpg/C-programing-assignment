#include <stdio.h>

int main() {
    int customerID, units;
    char name[50];
    float amount = 0, surcharge = 0, total;

   
    printf(" ➡️  Enter Customer ID: ");
    scanf("%d", &customerID);

    printf(" ➡️  Enter Customer Name: ");
    scanf("%s", name);  

    printf("➡️  Enter Units Consumed: ");
    scanf("%d", &units);


    if (units <= 100) {
        amount = units * 5;
    } else if (units <= 300) {
        amount = (100 * 5) + (units - 100) * 7;
    } else {
        amount = (100 * 5) + (200 * 7) + (units - 300) * 10;
    }

   
    amount += 100;

    if (amount > 2000) {
        surcharge = amount * 0.10;
    }

    total = amount + surcharge;

    if (total < 200) {
        total = 200;
    }

    printf("\n Electricity Bill \n");
    printf("Customer ID      : %d\n", customerID);
    printf("Customer Name    : %s\n", name);
    printf("Units Consumed   : %d\n", units);
    printf("Base Amount      : %.2f\n", amount);
    printf("Surcharge        : %.2f\n", surcharge);
    printf("Total Bill       : %.2f\n", total);
    

    return 0;
}
