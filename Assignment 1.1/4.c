// Given an input positive integer number, display odd numbers from in the range [1, n].


#include <stdio.h>

int main() {
    int n, i;

    printf("Enter a positive integer : ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Please enter a non-negative number.\n");
        return 0;
    }
 
    printf("The odd numbers are: ");
    for ( i = 0; i <=n; i++)
    {
        if(i%2!=0){
            printf( "%d " , i);
        }
    }
    
return 0;

}