#include <stdio.h>

int main() {
    int n, a = 0, b = 1, c = 1, next;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Tribonacci sequence:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        next = a + b + c;
        a = b;
        b = c;
        c = next;
    }
    return 0;
}
