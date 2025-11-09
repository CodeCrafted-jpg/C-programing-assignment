// 2. Banking System – Deposit & Withdraw
// Write a C program to simulate a bank account starting with ₹10,000.
// Menu should allow:
// 1. Deposit Money
// 2. Withdraw Money
// 3. Display Balance
// Functions:
// deposit(), withdraw(), displayBalance()
// Sample Data:
// Deposit ₹2000 → New balance ₹12,000
// Withdraw ₹3000 → New balance ₹9,000

#include <stdio.h>
int deposit()
{
    int depo;
    printf("deposit your desired amount: \n");
    scanf("%d", &depo);

    if (depo < 10000)
    {
        printf("Amount should be over 10000 \n");
    }
    else
    {
        printf("Deposit succesfull \n");
        printf("Your current balence is %d \n" , depo);
    }
    return depo;
}

int withdraw(int deposit)
{
    int with, amount;
    printf("Enter the amount you want to withdraw \n");
    scanf("%d", &with);
   
    if(deposit>with){
        amount=deposit-with;
    }

    return amount;
}

void displayBalance(int amt){
   printf("your bank balence is:%d" , amt);
}

int main()
{
    int amount,rem;
    printf("Banking System - Deposit & Withdraw \n");

   amount = deposit();
   rem=withdraw(amount);

   displayBalance(rem);
   return 0;

}