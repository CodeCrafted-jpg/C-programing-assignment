#include <stdio.h>

int main() {
    int num;
    int sum = 0;

    printf("Enter numbers to sum (enter -1 to stop):\n");

    scanf("%d", &num);

    while (num != -1) {
        sum = sum + num;  
        scanf("%d", &num);
    }

    printf("The total sum is: %d\n", sum);

    return 0;
}
