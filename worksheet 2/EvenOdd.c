#include <stdio.h>

int main(){
    int a;



    printf("Enter a number");

    scanf("%d" ,&a);

    if(a%2==0){
        printf("Number is an even number");
    }else{
        printf("Number is an odd number");
    }
    return  0;
}
