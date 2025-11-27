// Write a recursive function void printPrimeNumbers(int n) that prints only Prime
// numbers from 1 to n using recursion.


#include <stdio.h>

int Prime(int num, int i) {
    if (num <= 1) return 0;         
    if (i == 1) return 1;          
    if (num % i == 0) return 0;   
    return Prime(num, i - 1);     
}
void printPrimeNumbers(int n) {
    if (n == 0) return;            
  printPrimeNumbers(n - 1);       
 if (Prime(n, n / 2)) {
        printf("%d ",n);
    }
}
int main() {
    int n;
    printf("Enter a number:");
    scanf("%d", &n);


    if(n==1){
        printf("You cant enter 1");
          }
          
    printf("prime numbers from 1 to %d are:\n", n);
    printPrimeNumbers(n);

    return 0;
}

