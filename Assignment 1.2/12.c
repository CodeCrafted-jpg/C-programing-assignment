#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int rev = 0;
    int temp = num;

    while (temp > 0) {
        rev = rev * 10 + (temp % 10);
        temp /= 10;
    }

    while (rev > 0) {
        int d = rev % 10;

        switch(d) {
            case 0: printf("ZERO "); break;
            case 1: printf("ONE "); break;
            case 2: printf("TWO "); break;
            case 3: printf("THREE "); break;
            case 4: printf("FOUR "); break;
            case 5: printf("FIVE "); break;
            case 6: printf("SIX "); break;
            case 7: printf("SEVEN "); break;
            case 8: printf("EIGHT "); break;
            case 9: printf("NINE "); break;
        }
        rev /= 10;
    }

    return 0;
}
