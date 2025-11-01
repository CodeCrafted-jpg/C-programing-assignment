// 1. Student Result Management System
// Write a C program using multiple functions to input marks of 3 subjects (out of
// 100) for a student named Rahul.
// • If the average ≥ 80 → Grade A
// • If average ≥ 60 → Grade B
// • If average ≥ 40 → Grade C
// • Else → Fail
// Functions:
// inputMarks(), calculateAverage(), displayResult()
// Sample Data:
// Marks → 75, 85, 65
// Expected Output:
// Average = 75 → Grade B

#include <stdio.h>

int inputMarks()
{
    int marks1, marks2, marks3, total;
    printf("Enter your marks for subject 1: \n");
    scanf("%d", &marks1);
    printf("Enter your marks for subject 2: \n");
    scanf("%d", &marks2);
    printf("Enter your marks for subject 3: \n");
    scanf("%d", &marks3);
    total = marks1 + marks2 + marks3;
    return total;
}

float calculateAverage(int total)
{
    int avg;

    avg = total / 3;

    return avg;
}

void displayResult(int avg){
   if(avg>=80){
    printf("Your garade is A \n");
   }else if(avg>=60){
    printf("YOur grade is B \n");
   }else if(avg>=40){
    printf("YOur grade is C \n");
   }else{
    printf("Failed");
   }


}

int main()
{
    int totalMarks;
    float Avg;

      printf("===== Grade Checker =====\n");
   totalMarks=inputMarks();
   Avg=calculateAverage(totalMarks);
   displayResult(Avg);

   return 0;



}