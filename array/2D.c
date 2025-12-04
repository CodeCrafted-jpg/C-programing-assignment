//claculate the sum of the elements present in the diagonal  and alternate diagonal
#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter the size of the square matrix (n): ");
    scanf("%d", &n);

    int a[n][n];

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int mainDiagonalSum = 0;
    int altDiagonalSum = 0;


    for (i = 0; i < n; i++) {
        mainDiagonalSum += a[i][i];               
        altDiagonalSum += a[i][n - 1 - i];       
    }

    printf("Sum of main diagonal = %d\n", mainDiagonalSum);
    printf("Sum of alternate diagonal = %d\n", altDiagonalSum);

    return 0;
}
