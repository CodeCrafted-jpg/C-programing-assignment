#include <stdio.h>

int main(){
    float a,b;
    printf("Enter the first num: " ,a);
    scanf("%f" ,&a);
    printf("Enter the sceond number: ",b);
    scanf("%f" ,&b);

    if(a>b){
        printf("😊 Frst number is grater than second%d\n"  );

    }
    else if(b>a){
        printf("😊 second number is grater than first%d\n" );
    }
    else{
        printf("⚖️  both numbers are same");
    }
    return 0;
}