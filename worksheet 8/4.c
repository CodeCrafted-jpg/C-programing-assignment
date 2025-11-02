// Menu-Driven Calculator
// Create a calculator using separate functions:
// add(), subtract(), multiply(), divide()
// User enters two numbers: 25 and 5.
// Expected Output:
// Addition = 30, Subtraction = 20, Multiplication = 125, Division = 5


#include <stdio.h>

int add(int a, int b){
int sum=a+b;
return sum;

}

int subtract(int a, int b){
    int sub=a-b;
    return sub;
}

int multiply(int a,int b){
    int into=a*b;
    return into;

}

float devide(int a, int b){
    float dev=a%b;
    return dev;
}

int main(){
int A,B;
printf("Enter 2 numbers: \n");
scanf("%d %d" , &A , &B );
printf("Addition= %d \n", add(A,B));
printf("subtraction= %d \n" ,subtract(A,B));
printf("Multiplication= %d \n",multiply(A,B));
printf("devision= %d \n" ,devide(A,B));
return 0;
}