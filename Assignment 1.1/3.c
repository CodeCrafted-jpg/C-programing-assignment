// 3. Given a positive integer value n (>= 0) display number, square and cube of numbers from 1 to n in a
// tabular format.

#include <stdio.h>

int main() {
    int n, i;

    printf("Enter a positive integer : ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Please enter a non-negative number.\n");
        return 0;
    }

    printf("\nNumber\tSquare\tCube\n");


    for (i = 1; i <= n; i++) {
        printf("%d\t%d\t%d\n", i, i*i, i*i*i);
    }

    return 0;
}

