#include <stdio.h>

int main(){
    int ticket,price,total;
 
    printf("🔢  Enter the  number ticket sold: ");
    scanf("%d" , &ticket);

    if(ticket <= 4)
    {
       price=200;
       total=price*4;

    }
    else if(ticket<9){
        price=180;
        total=price*ticket;
    }
    else{
        price=160;
        total=price*ticket;
    }

    printf("💵  Total price is ₹%d :" , total);
    return 0;

}