#include <stdio.h>

int main() {
    int digit;
    long number = 0;

    printf("Enter digits one by one(enter -1 to stop):\n");

    scanf("%d", &digit);

    while (digit != -1) {
        number = number * 10 + digit;  
        scanf("%d", &digit);           
    }

    printf("The formed number is: %ld\n", number);

    return 0;
}
