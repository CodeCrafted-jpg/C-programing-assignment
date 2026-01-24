// 5. Implement your own string length and string reversal functions?
#include <stdio.h>

int mystrlen(char s[]) {
    int i = 0;
    while (s[i] != '\0')
        i++;
    return i;
}

void reverse(char s[]) {
    int i, j;
    char temp;
    for (i = 0, j = mystrlen(s) - 1; i < j; i++, j--) {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}

int main() {
    char s[100];
    printf("Enter string: ");
    gets(s);

    printf("Length = %d\n", mystrlen(s));
    reverse(s);
    printf("Reversed = %s\n", s);

    return 0;
}
