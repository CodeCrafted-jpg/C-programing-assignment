#include <stdio.h>

int main() {
    int marks;

    printf("Enter marks (0-100): ");
    scanf("%d", &marks);

    if (marks >= 80 && marks <= 100)
        printf("Grade: A\n");
    else if (marks >= 60 && marks <= 79)
        printf("Grade: B\n");
    else if (marks >= 50 && marks <= 59)
        printf("Grade: C\n");
    else if (marks >= 40 && marks <= 49)
        printf("Grade: D\n");
    else if (marks >= 0 && marks <= 39)
        printf("Grade: F\n");
    else
        printf("Invalid marks entered!\n");

    return 0;
}
