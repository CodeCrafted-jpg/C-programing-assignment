// 7. Write a program in C to merge two arrays of same size sorted in decending order.

// 7. Write a program in C to merge two arrays of same size
//    and sort the merged array in descending order.

#include <stdio.h>

int main() {
    int a[50], b[50], c[100];
    int n, i, j, temp;

    printf("Enter the number of elements in each array: ");
    scanf("%d", &n);

    printf("Enter elements of first array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        c[i] = a[i];   
    }

    printf("Enter elements of second array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &b[i]);
        c[n + i] = b[i]; 
    }

    for (i = 0; i < 2 * n - 1; i++) {
        for (j = i + 1; j < 2 * n; j++) {
            if (c[i] < c[j]) {
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }

    printf("Merged array in descending order:\n");
    for (i = 0; i < 2 * n; i++) {
        printf("%d ", c[i]);
    }

    return 0;
}
