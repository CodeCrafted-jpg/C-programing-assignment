// . An Electricity board charges the following rates for the use of
// electricity: for the first 200 units 80 paise per unit: for the next
// 100 units 90 paise per unit: beyond 300 units Rs 1 per unit. All
// users are changed a minimum of Rs. 100 as meter charge. If the
// total amount is more than Rs 400, then an additional surcharge
// of 15% of total amount is charged. Write a program to read the
// name of the user, number of units consumed and print out the
// charges.
// Sampleenter the name of consumer
// Chetan
//  enter the number of units consumed
//  300
//  consumer name=Chetan
//  units consumed =300
//  bill amount=350.000000 rupees



#include <stdio.h>
#include <string.h>

int main() {
    char name[50];
    int units;
    float amount = 0.0, total = 0.0;

    printf("Enter the name of consumer:\n");
    scanf("%s", name);

    printf("Enter the number of units consumed:\n");
    scanf("%d", &units);

  
    if (units <= 200) {
        amount = units * 0.80;
    } else if (units <= 300) {
        amount = 200 * 0.80 + (units - 200) * 0.90;
    } else {
        amount = 200 * 0.80 + 100 * 0.90 + (units - 300) * 1.00;
    }

 
    if (amount < 100) {
        amount = 100;
    }

  
    if (amount > 400) {
        amount = amount + (amount * 0.15); 
    }

   
    printf("\nConsumer Name = %s\n", name);
    printf("Units Consumed = %d\n", units);
    printf("Bill Amount = %.2f rupees\n", amount);

    return 0;
}


