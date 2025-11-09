//Findmaximum number using two pointer

#include <stdio.h>
int main(){

int a,b;

int *c;
int *d;

c=&a;
d=&b;

printf("Enter two no.\n");
scanf("%d%d" ,&a,&b);

if(*c>*d){
    printf("%d is the maximum number",*c);
}
else{
     printf("%d is the maximum number",*d);
}

return 0;
}