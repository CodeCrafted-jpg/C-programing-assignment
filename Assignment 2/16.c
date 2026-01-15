// 16. Write a program in C to find the second largest element in an array.

#include <stdio.h>

int main() {
    int arr[100], n, i;
    int max, sec_lar;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Second largest element not possible.");
        return 0;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    max = sec_lar = -99999;

    for (i = 0; i < n; i++) {
        if (arr[i] > max) {
            sec_lar = max;
            max = arr[i];
        } else if (arr[i] > sec_lar && arr[i] < max) {
            sec_lar = arr[i];
        }
    }

    printf("Second largest element = %d", sec_lar);

    return 0;
}
