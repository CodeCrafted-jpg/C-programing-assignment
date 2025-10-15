#include <stdio.h>

int main() {
    int n=10;
    int a[n],sum=0,avarage ,min,temp;
     

    
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]); 
    }


    for (int i = 0; i < n/2; i++) {
        temp=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=temp;
   
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d" ,a[i]);
    }
    

   
    return 0;
}
