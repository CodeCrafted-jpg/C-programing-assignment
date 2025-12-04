//multiply 2 matrix





#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
    int i, j, k;

   
    printf("Enter rows and columns of Matrix 1: ");
    scanf("%d %d", &r1, &c1); // Read size

    
    printf("Enter rows and columns of Matrix 2: ");
    scanf("%d %d", &r2, &c2);// Read size 

 
    if (c1 != r2) {
        printf("Matrix multiplication not possible!\n"); //checking
        return 0;
    }

    int A[r1][c1], B[r2][c2], C[r1][c2];

    
    printf("Enter elements of Matrix 1:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {//input 1
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of Matrix 2:\n");
    for (i = 0; i < r2; i++) {  
        for (j = 0; j < c2; j++) {                       
            scanf("%d", &B[i][j]); //input 2
        }
    }

    
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {           // c=0
            C[i][j] = 0;
        }
    }

    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            for (k = 0; k < c1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("Resultant Matrix (A x B):\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
