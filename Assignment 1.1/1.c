// 1. Converting degrees Celsius to Fahrenheit and vice versa.
#include <stdio.h>

float farToCel(float a){
    float result;
    result=(a - 32) * 5 / 9;
    return result;

}

float celToFer(float a){
float result;
result=a* 9 / 5 + 32;
return result;
}

int main(){
  
    float a,res;
    int temp;

    printf("Press 1 for Fahrenheit to Celcius \n");
    printf("Press 2 for Celcius to Fahrenheit \n");
     scanf("%d", &temp);
    switch (temp)
    {
    case 1:
        printf("You choose  Fahrenheit to Celcius- Enter the Fahrenheit temparature: ");
        scanf("%f",&a);
       res=farToCel(a);
       printf("Celcius scale equivalent value of your entered Fahrenheit temparature is: %f " ,res);
        break;
    case 2:
        printf("You choose  Celcius to Fahrenheit- Enter the Celcius temparature: ");
        scanf("%f",&a);
        res=celToFer(a);
          printf("Fahrenheit scale equivalent value of your entered Celcius temparature is: %f " ,res);
        break;
    
    default:
        printf("You can only press 1 or 2");
    }
    return 0;
}