// 6. Display following patterns of n rows (n > 0), For the below examples n = 5? For each pattern write a
// separate algorithm/program.
// $
// $$
// $$$
// $$$$
// $$$$$
//  $
//  $$
//  $$$
// $$$$
// $$$$$
// 12345
// 1234
// 123
// 12
// 1
// 12345
// 1234
//  123
//  12
 //
#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter number of rows (n > 0): ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Please enter a positive number.\n");
        return 0;
    }
    printf("\nPattern 1:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("$");
        }
        printf("\n");
    }  
    printf("\nPattern 2:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("$");
        }
        printf("\n");
    }
    printf("\nPattern 3:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i + 1; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    printf("\nPattern 4:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j < i; j++) {
            printf(" ");
        }
        for (j = 1; j <= n - i + 1; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
