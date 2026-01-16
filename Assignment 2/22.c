// 20. Write a program in C for traspose of a given matrices
#include <stdio.h>

int main() {
    int a[10][10], b[10][10];
    int r, c, i, j;

    printf("Enter number of rows for the square matrix: ");
    scanf("%d %d", &r,&c);

    printf("Enter elements of first matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

  

  
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            b[i][j] = a[j][i] ;
        }
    }

    
    printf("Trnspose of the  matrices:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}
