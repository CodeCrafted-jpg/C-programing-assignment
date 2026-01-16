// 21. Write a program in C for Multiplication of two square matrices

#include <stdio.h>

int main() {
    int a[10][10], b[10][10], mul[10][10];
    int r, c, i, j;

    printf("Enter number of rows for the square matrix: ");
    scanf("%d", &r);

    printf("Enter elements of first matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < r; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < r; j++) {
            scanf("%d", &b[i][j]);
        }
    }

  
    for (i = 0; i < r; i++) {
        for (j = 0; j < r; j++) {
            mul[i][j] = a[i][j] * b[i][j];
        }
    }

    
    printf("multiplication of the two matrices:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < r; j++) {
            printf("%d\t", mul[i][j]);
        }
        printf("\n");
    }

    return 0;
}
