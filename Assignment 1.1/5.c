// 5. Display first mathematical tables, each table up to 10 rows? Generalise this to display first n (> 0) 

#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter how many tables you want to display (n > 0): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive number greater than 0.\n");
        return 0;
    }

    for (i = 1; i <= n; i++) {
        printf("\nMultiplication Table of %d\n", i);
      
        for (j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
    }

    return 0;
}
