#include <stdio.h>

int main()
{
    int p,r,t;
    printf("➡️ Enter the principal: ");
    scanf("%d" ,&p);

    printf("➡️ ENter the Rate: ");
    scanf("%d" ,&r);

    printf("➡️ ENter the time: ");
    scanf("%d" ,&t);
    

    int i=(p*r*t)/100;

    printf("So i=simple interset is = %d" ,i);

}