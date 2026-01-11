// 2. Write a program in C to read n number of values in an array and display it in reverse
// order
#include <stdio.h>
int main(){
    int arr[100], n, i;
     printf("Enter the number of elements: ");
    scanf("%d", &n);

  
    printf("Enter %d elements:\n", n);
 
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

      printf("Here are the elements you entered in reverse order: ");

    for (int i = n-1; i >=0; i--)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;

}