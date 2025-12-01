// 4. Bank ATM Mini-System (Loops + Functions)
// Features:
// • Menu-driven ATM
// • Withdraw, deposit, balance check
// • Functions for each operation
// • Pointers to modify balance
// Real use: Basic simulation of ATM logic.

#include <stdio.h>

void deposit(double *bal)
{
    double amt;
    printf("Enter amount to deposit: ");
    if (scanf("%lf", &amt) != 1 || amt <= 0)
    {
        printf("Invalid amount.\n");

        while (getchar() != '\n')
            ;
        return;
    }
    *bal += amt;
    printf("Rs %.2f deposited.\n", amt);
}

void withdraw(double *bal)
{
    double amt;
    printf("Enter amount to withdraw: ");
    if (scanf("%lf", &amt) != 1 || amt <= 0)
    {
        printf("Invalid amount.\n");
        while (getchar() != '\n')
            ;
        return;
    }
    if (amt > *bal)
    {
        printf("Insufficient balance.\n");
        return;
    }
    *bal -= amt;
    printf("Rs %.2f withdrawn.\n", amt);
}

void check_balance(double *bal)
{
    printf("Current balance: Rs %.2f\n", *bal);
}

int main()
{
    double balance = 00.00;
    int choice;

    while (1)
    {
        printf("\nATM\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check balance\n");
        printf("4. Exit\n");
        printf("Choose option: ");
        if (scanf("%d", &choice) != 1)
        {
            printf("Invalid input.\n");
            while (getchar() != '\n')
                ;
            continue;
        }

        if (choice == 1)
        {
            deposit(&balance);
        }
        else if (choice == 2)
        {
            withdraw(&balance);
        }
        else if (choice == 3)
        {
            check_balance(&balance);
        }
        else if (choice == 4)
        {
            printf("Thank you. Bye.\n");
            break;
        }
        else
        {
            printf("Invalid choice.\n");
        }
    }

    return 0;
}
