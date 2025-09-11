#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], merged[200];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

   
    strcpy(merged, str1);  
    strcat(merged, str2);  

    printf("Merged string: %s" " \n", merged);

    return 0;
}

