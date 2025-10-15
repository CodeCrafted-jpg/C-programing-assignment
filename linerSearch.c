#include <stdio.h>

int main() {
    int n=10;
    int a[n],sum=0,avarage ,min,temp,num;
     

    
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]); 
    }



    printf("Enter the number you want to search➡️  ");
    scanf("%d",&num);

    for (int i = 0; i < n; i++) {
       
   if(num==a[i]){
    temp +=1;
    printf("Number found at index:  %d  " , i+1);
   }
  
    };



    if (temp==0)
    {
      printf("Number not found!!");
    }else
    printf("Found✅");
    

   

   
    return 0;
}
