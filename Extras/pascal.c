#include <stdio.h>

int main(){
    int c=1;
    for (int i = 0; i < 10; i++)
    {
        for(k=1; k<=n-i; k++){
            printf("");
        }
    }
    for (int j  = 0; j<=i; j++)
    {
        if (j==0 && i==0 )
        {
            c=1;
        }else{
            c=c*(i-j+1)/j;
        }
        printf("%d ", c);
        
    }
    
    return 0;
    
    
}