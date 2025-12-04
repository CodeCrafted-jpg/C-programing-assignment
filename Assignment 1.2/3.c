#include <stdio.h>

int main() {
    int num, original, reversed = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    original = num; 

    
    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num = num / 10;
    }

    if (original == reversed) {
        printf("%d is a palindrome number.\n", original);
    } else {
        printf("%d is not a palindrome number.\n", original);
    }

    return 0;
}
