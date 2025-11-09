#include <stdio.h>

int main() {
    int start, end, i, sum = 0;
   
    
    printf("➡️ Enter the starting number of the range: ");
    scanf("%d", &start);

    printf("➡️ Enter the ending number of the range: ");
    scanf("%d", &end);

    for (i = start; i <= end; i++) {
        if (i % 2 == 0) {   
            sum += i;
        }
    }

    printf("✅ The sum of even numbers between %d and %d is: %d\n", start, end, sum);

    return 0;
}
