// 4. Design a modular algorithm/program which reads an array of n integer elements and
// outputs median?

#include <stdio.h>

void sort(int a[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] > a[j]) {
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    sort(a, n);

    if (n % 2 == 0)
        printf("Median = %.2f\n", (a[n/2 - 1] + a[n/2]) / 2.0);
    else
        printf("Median = %d\n", a[n/2]);

    return 0;
}
