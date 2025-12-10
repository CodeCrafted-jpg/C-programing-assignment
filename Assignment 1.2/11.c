#include <stdio.h>
#include <string.h>

int main() {
    char num[50];
    int inBase, outBase;

    printf("Enter input base (2-10): ");
    scanf("%d", &inBase);

    printf("Enter output base (2-10): ");
    scanf("%d", &outBase);

    printf("Enter the number: ");
    scanf("%s", num);


    for (int i = 0; num[i] != '\0'; i++) {
        if (num[i] < '0' || num[i] > '9' || (num[i]-'0') >= inBase) {
            printf("Invalid digit '%c' for base %d\n", num[i], inBase);
            return 0;
        }
    }

    int decimal = 0;
    for (int i = 0; num[i] != '\0'; i++) {
        decimal = decimal * inBase + (num[i] - '0');
    }

    char result[50];
    int idx = 0;

    while (decimal > 0) {
        result[idx++] = (decimal % outBase) + '0';
        decimal /= outBase;
    }
    result[idx] = '\0';

    for (int i = 0; i < idx/2; i++) {
        char temp = result[i];
        result[i] = result[idx - 1 - i];
        result[idx - 1 - i] = temp;
    }

    printf("Converted number: %s\n", result);

    return 0;
}
