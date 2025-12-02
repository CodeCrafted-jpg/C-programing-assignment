// 1. Student Marks Analyzer (1D Array + Functions + Loops)
// What it includes:
// • Input marks of students using loops
// • Store in 1D array
// • Functions for:
// o calculating average
// o highest score
// o lowest score
// o grade distribution
// • Pointer-based traversal (optional)
// Real use: Small college marks calculator.

#include <stdio.h>
double average(int *m, int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += *(m + i);      
    }
    return (double)sum / n;
}

int highest(int *m, int n) {
    int max = *m;
    for(int i = 1; i < n; i++) {
        if(*(m + i) > max) {
            max = *(m + i);
        }
    }
    return max;
}

int lowest(int *m, int n) {
    int min = *m;
    for(int i = 1; i < n; i++) {
        if(*(m + i) < min) {
            min = *(m + i);
        }
    }
    return min;
}


void gradeDist(int *m, int n) {
    int A=0, B=0, C=0, D=0, F=0;

    for(int i = 0; i < n; i++) {
        int mark = *(m + i);

        if(mark >= 90) A++;
        else if(mark >= 80) B++;
        else if(mark >= 70) C++;
        else if(mark >= 60) D++;
        else F++;
    }
    printf("\n--- Grade Distribution ---\n");
    printf("A (90-100): %d\n", A);
    printf("B (80-89) : %d\n", B);
    printf("C (70-79) : %d\n", C);
    printf("D (60-69) : %d\n", D);
    printf("F (<60)   : %d\n", F);
}
int main() {
    int n;
    int marks[100];

    printf("Enter number of students: ");
    scanf("%d", &n);

    if(n > 100) {
        printf("Limit exceeded.\n");
        return 0;
    }
    printf("Enter marks:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", marks + i);  
    }

    printf("\nAverage Marks : %.2f\n", average(marks, n));
    printf("Highest Marks : %d\n", highest(marks, n));
    printf("Lowest Marks  : %d\n", lowest(marks, n));

    gradeDist(marks, n);
    return 0;
}
