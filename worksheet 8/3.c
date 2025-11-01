// A book was issued for 14 days but returned after 20 days.
// Rules:
// • Up to 15 days: ₹1/day
// • 16–30 days: ₹2/day
// • Above 30 days: ₹5/day
// Functions:
// inputDays(), calculateFine(), displayFine()
// Expected Output:
// Fine = ₹10 (5 days × ₹2)

#include <stdio.h>

int inputDays(int date)
{

    if (date <= 14)
    {
        printf("You have Returned the book on time no fine was enforced");
    }
    else
    {

        printf("You exited the limit of 14 days \n");
    }

    return date;
}
int calculateFine(int day){
    int fine;
   if(day==15){
       fine=1;
   }
   else if(day<=30){
    fine=2*(day-14);
   }
   else if(day>30){
    fine=(day-14)*5;
   }

   return fine;
}

void displayFine(int fine){
    printf("Your fine is rs. : %d " , fine);

}



int main()
{

    int days,fine;

     printf("Enter the days the book was retured after: \n");
    scanf("%d", &days);

    inputDays(days);
   fine= calculateFine(days);
     displayFine(fine);
    return 0;
}