#include <stdio.h>

int main() {
    int marks;
    int A = 0, B = 0, C = 0, D = 0, F = 0;

    printf("Enter marks of students (-1 to stop): \n");

    while (1) {
        scanf("%d", &marks);

        if (marks == -1) 
            break;

        if (marks >= 80 && marks <= 100)
            A++;
        else if (marks >= 60 && marks <= 79)
            B++;
        else if (marks >= 50 && marks <= 59)
            C++;
        else if (marks >= 40 && marks <= 49)
            D++;
        else if (marks >= 0 && marks <= 39)
            F++;
        else
            printf("Invalid marks! Enter again.\n");
    }
    printf("\nGrade Distribution (Bar Chart):\n");

    printf("A: ");
    for (int i = 0; i < A; i++)
        printf("*");
    printf("\n");

    printf("B: ");
    for (int i = 0; i < B; i++)
        printf("*");
    printf("\n");

    printf("C: ");
    for (int i = 0; i < C; i++)
        printf("*");
    printf("\n");

    printf("D: ");
    for (int i = 0; i < D; i++)
        printf("*");
    printf("\n");

    printf("F: ");
    for (int i = 0; i < F; i++)
        printf("*");
    printf("\n");

    return 0;
}
