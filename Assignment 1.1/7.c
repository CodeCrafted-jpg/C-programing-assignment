// 7. Display the following patterns of n rows (n > 0), for the below examples n = 5
// a) Hollow Square pattern
// #####
// # #
// # #
// # #
// #####
// b) Triangle Patterns with numbers:
//  1
//  121
//  12321
//  1234321
// 123454321
// c) Square with diagonals:
// * * * * *
// * * * *
// * * *
// * * * *
// * * * * *
// d) Diamond Pattern
// *
// * * *
// * * * * *
// * * 

#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter number of rows (n > 0): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive number.\n");
        return 0;
    }

    // Pattern (a) ----------------
    printf("\n(a) Hollow Square Pattern:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n)
                printf("#");
            else
                printf(" ");
        }
        printf("\n");
    }

    // Pattern (b)----------------
    printf("\n(b) Number Triangle Pattern:\n");
    for (i = 1; i <= n; i++) {
      
        for (j = i; j < n; j++)
            printf(" ");

       
        for (j = 1; j <= i; j++)
            printf("%d", j);

      
        for (j = i - 1; j >= 1; j--)
            printf("%d", j);

        printf("\n");
    }

    // Pattern (c) ----------------
    printf("\n(c) Square with Diagonals:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            
            if (i == 1 || i == n || j == 1 || j == n || i == j || j == (n - i + 1))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    //  Pattern (d)----------------
    printf("\n(d) Diamond Pattern:\n");

    for (i = 1; i <= n; i++) {
        for (j = i; j < n; j++)
            printf(" ");
        for (j = 1; j <= (2 * i - 1); j++)
            printf("*");
        printf("\n");
    }

    
    for (i = n - 1; i >= 1; i--) {
        for (j = n; j > i; j--)
            printf(" ");
        for (j = 1; j <= (2 * i - 1); j++)
            printf("*");
        printf("\n");
    }

    return 0;
}
