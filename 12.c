#include <stdio.h>

int main() {
    int a, b;

    printf("Enter the starting number: ");
    scanf("%d", &a);

    printf("Enter the ending number: ");
    scanf("%d", &b);

    printf("Odd numbers between %d and %d are:\n", a, b);

    for (int i = a; i <= b; i++) {
        if (i % 2 != 0) {  
            printf("%d\n", i);
        }
    }

    return 0;
}
