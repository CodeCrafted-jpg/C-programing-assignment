// 2. Design a modularized algorithm/program to compute a maximum of 8 numbers?
#include <stdio.h>

int findMax(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
    return max;
}

int main() {
    int a[8];
    printf("Enter 8 numbers:\n");
    for (int i = 0; i < 8; i++)
        scanf("%d", &a[i]);

    printf("Maximum = %d\n", findMax(a, 8));
    return 0;
}
