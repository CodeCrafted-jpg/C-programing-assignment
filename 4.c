#include <stdio.h>



int main(){
    float r,area,perimeter;
    float pi=3.14159;
    printf("⚖️  Enter the redius:" );
    scanf("%f", &r);

    area=pi * r * r;
    perimeter=2* pi * r;

    printf("😊 Area of the Given circle=%.2f\n" ,area);
    printf("😊 Perimeter of the Given circle=%.2f\n" ,perimeter);
    return 0;
}