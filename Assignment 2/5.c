// 5. Write a program in C to count a total number of duplicate elements in an array.

#include <stdio.h>
int main(){
    int arr[100], n, i,dup=0;
     printf("Enter the number of elements: ");
    scanf("%d", &n);

  
    printf("Enter %d elements:\n", n);
 
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("no. of duplicates are: ");
    for ( i = 0; i < n; i++)
    {
        if (arr[i]==arr[i+1])
        {
            dup=dup+1;
        }
        
    }
    printf("%d" , dup);

}