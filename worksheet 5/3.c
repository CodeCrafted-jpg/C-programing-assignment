#include <stdio.h>

int main(){
    int one, two, third;

    printf("Enter the first number: ");
    scanf("%d", &one);

    printf("Enter the second number: ");
    scanf("%d", &two);

    printf("Enter the third number: ");
    scanf("%d", &third);



    if(one>two){
         if(one > third){
            printf("one is the largest number");
         }
    }else(two>third){
        printf("Second number is largest");
    }
    else{
        printf("Third number is the largest");
    }



return 0;

}