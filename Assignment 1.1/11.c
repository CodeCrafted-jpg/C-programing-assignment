#include <stdio.h>

int main() {
    int n1, n2, a = 0, b = 1, c;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    while (b < n2) {
        c = a + b;
        a = b;
        b = c;
    }

    if (a == n1 && b == n2)
        printf("Consecutive Fibonacci numbers\n");
    else
        printf("Not consecutive Fibonacci numbers\n");

    return 0;
}
