#include <stdio.h>

int main(){
   int n,num;
     printf("Enter the number of elements you want in your array: ");
   scanf("%d" , &n);
    int a[n],temp[n];
 

   for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]); 
    }


      printf("Enter the number   you want add to every element of  your array: ");
      scanf("%d" , &num);

      for (int i = 0; i < n; i++)
      {
        temp[i] = num+a[i];

      }
      
      printf("New array: ");
for (int i = 0; i < n; i++) {
    printf("%d ", temp[i]);
}
printf("\n");
    

}