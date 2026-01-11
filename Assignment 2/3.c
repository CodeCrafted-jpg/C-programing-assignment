// 3. Write a program in C to find the sum of all elements of the array

#include <stdio.h>
int main(){
    int arr[100], n, i,sum=0;
     printf("Enter the number of elements: ");
    scanf("%d", &n);

  
    printf("Enter %d elements:\n", n);
 
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Sum of elements are: ");
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
    }
  
    printf("%d" , sum);
    
    
}