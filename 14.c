#include <stdio.h>

int main() {
    int start, end, i;

    printf("Enter the starting number of the range: ");
    scanf("%d", &start);

    printf("Enter the ending number of the range: ");
    scanf("%d", &end);

    printf("Numbers divisible by 3 or 5 between %d and %d are:\n", start, end);

    for (i = start; i <= end; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            printf("➡️%d\n", i);
        }
    }

    return 0;
}
