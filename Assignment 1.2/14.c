#include <stdio.h>

int main() {
    int n, max, min;
    double sum = 0, count = 0;

    printf("Enter numbers (enter -1 to stop):\n");
    
    while (1) {
        scanf("%d", &n);
        if (n == -1) break;          

        if (count == 0) {            
            max = min = n;
        }

        if (n > max) max = n;
        if (n < min) min = n;

        sum += n;
        count++;
    }

    if (count == 0) {
        printf("No numbers entered.\n");
    } else {
        printf("Max = %d\n", max);
        printf("Min = %d\n", min);
        printf("Sum = %.0f\n", sum);
        printf("Average = %.2f\n", sum / count);
    }

    return 0;
}
