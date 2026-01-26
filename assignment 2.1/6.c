#include <stdio.h>

/* Function to add two matrices */
void add(int a[10][10], int b[10][10], int r, int c) {
    int i, j;
    printf("\nAddition Result:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++)
            printf("%d ", a[i][j] + b[i][j]);
        printf("\n");
    }
}

/* Function to subtract two matrices */
void subtract(int a[10][10], int b[10][10], int r, int c) {
    int i, j;
    printf("\nSubtraction Result:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++)
            printf("%d ", a[i][j] - b[i][j]);
        printf("\n");
    }
}

/* Function to find transpose of a matrix */
void transpose(int a[10][10], int r, int c) {
    int i, j;
    printf("\nTranspose Result:\n");
    for (i = 0; i < c; i++) {
        for (j = 0; j < r; j++)
            printf("%d ", a[j][i]);
        printf("\n");
    }
}

int main() {
    int a[10][10], b[10][10];
    int r, c, i, j;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("\nEnter elements of Matrix A:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf("\nEnter elements of Matrix B:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &b[i][j]);

    add(a, b, r, c);
    subtract(a, b, r, c);
    transpose(a, r, c);

    return 0;
}
