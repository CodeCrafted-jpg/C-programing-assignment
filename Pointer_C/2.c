//Addition of two no. using pointers

#include <stdio.h>
int main(){
int a,b,sum;

int *c;
int *d;

c=&a;
d=&b;
printf("Enter two no.\n");
scanf("%d%d" ,&a,&b);

sum=*c+*d;

printf("Sum of the values are %d", sum);
return 0;

}