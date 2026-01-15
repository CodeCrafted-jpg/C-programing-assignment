//  Write a program in C to find the second smallest element in an array


#include <stdio.h>

int main() {
    int arr[100], n, i;
    int min, sec_min;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Second smallest element not possible.");
        return 0;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    min = sec_min = -99999;

    for (i = 0; i < n; i++) {
        if (arr[i] < min) {
            sec_min = min;
            min = arr[i];
        } else if (arr[i] < sec_min && arr[i] > min) {
            sec_min = arr[i];
        }
    }

    printf("Second min element = %d", sec_min);

    return 0;
}
