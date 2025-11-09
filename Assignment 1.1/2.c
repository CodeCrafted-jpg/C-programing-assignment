// 2. Display three input numbers in sorted (non-decreasing) order


#include <stdio.h>
int main(){
    int arr[3];
    int i,j,temp;
    printf("Enter 3 numbers: ");

    for ( i = 0; i < 3; i++)
    {
        scanf("%d" ,&arr[i]);
    }
     for(i = 0; i < 2; i++) {
        for(j = i + 1; j < 3; j++) {
            if(arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Numbers in non-decreasing order: ");
    for ( i = 0; i < 3; i++)
    {
        printf("%d", arr[i]);
    }
   return 0;
}