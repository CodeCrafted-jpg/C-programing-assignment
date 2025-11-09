#include <stdio.h>

int main(){
   int year;
   
   printf("Enter a year format eg.20xx:  ");
   scanf("%d" ,&year);

   if(year % 4==0){
    printf("✅ Yes its a leapYear!\n");
   }else{
     printf("❌ No its not a leapYear!\n");
   }
}