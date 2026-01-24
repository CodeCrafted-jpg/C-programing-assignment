// 6. Design algorithm/program to perform matrix operations addition, subtraction and
// transpose?
#include <stdio.h>

void add(int a[10][10], int b[10][10], int r, int c) {
    int i, j;
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            printf("%d ", a[i][j] + b[i][j]);
    printf("\n");
}

void subtract(int a[10][10], int b[10][10], int r, int c) {
    int i, j;
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            printf("%d ", a[i][j] - b[i][j]);
    printf("\n");
}

void transpose(int a[10][10], int r, int c) {
    int i, j;
    for (i = 0; i < c; i++) {
        for (j = 0; j < r; j++)
            printf("%d ", a[j][i]);
        printf("\n");
    }
}
