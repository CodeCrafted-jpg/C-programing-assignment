// 3. Design a modular algorithm/program which reads an array of n integer elements and
// outputs mean (average), range (max-min) and mode (most frequent elements)?
#include <stdio.h>

void calculate(int a[], int n) {
    int sum = 0, max = a[0], min = a[0], mode = a[0], freq = 0;

    for (int i = 0; i < n; i++) {
        sum += a[i];
        if (a[i] > max) max = a[i];
        if (a[i] < min) min = a[i];

        int count = 0;
        for (int j = 0; j < n; j++)
            if (a[i] == a[j])
                count++;

        if (count > freq) {
            freq = count;
            mode = a[i];
        }
    }

    printf("Mean = %.2f\n", (float)sum / n);
    printf("Range = %d\n", max - min);
    printf("Mode = %d\n", mode);
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    calculate(a, n);
    return 0;
}
