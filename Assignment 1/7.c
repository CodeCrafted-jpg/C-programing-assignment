#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter the first angle of the triangle: ");
    scanf("%d", &a);

    printf("Enter the second angle of the triangle: ");
    scanf("%d", &b);

    printf("Enter the third angle of the triangle: ");
    scanf("%d", &c);

    int sum = a + b + c;

    if (sum == 180) {
        printf("✅ It's a valid triangle!\n");
    } else {
        printf("❌ No, this ain't a triangle.\n");
    }

    return 0;
}
