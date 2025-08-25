#include <stdio.h>

int main(){
    int a;

    printf("Enter the  number: ");
    scanf("%d" ,&a);

    if(a>=90){
        printf("The student got A");
    }else if(a<=75){
         printf("The student got b");
    }else if(a<=50){
         printf("The student got c");
    }else{
         printf("The student is failed");
    }
    return 0;
}