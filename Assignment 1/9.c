#include <stdio.h>
int main(){
    float base,hr,da,gross;

    printf("Enter base salary: ");
    scanf("%f" ,&base);

    if(base <=10000){
        hr=0.20* base;
        da=0.80 * base;
    }
    
    else if(base <=20000){
        hr=0.25* base;
        da=0.90 * base;
    }
    else{
        hr=0.30*base;
        da=0.95*base;
    }

    gross=base+hr+da;
     

    printf("Gross Salary = %.2f\n",gross);
    return 0;

}