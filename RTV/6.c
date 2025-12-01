// 6. Student Attendance Tracker (Array Search + Pointers)
// Features:
// • Store roll numbers in array
// • Mark present/absent
// • Search if a student attended using pointer-based search
// • Display summary
// Real use: College attendance automation

#include <stdio.h>

#define MAX 100

int search(int *arr, int n, int key) {
    for(int i = 0; i < n; i++) {
        if(*(arr + i) == key) {
            return i;
        }
    }
    return -1;
}

void showAttendance(int *rolls, int *status, int n) {
    if(n == 0) {
        printf("No students added.\n");
        return;
    }

    printf("\nAttendance Summary\n");
    for(int i = 0; i < n; i++) {
        printf("Roll %d : %s\n", *(rolls + i), status[i] ? "Present" : "Absent");
    }
}

int main() {
    int rolls[MAX];
    int status[MAX]; 
    int n, choice, r, pos;

    printf("Enter number of students: ");
    scanf("%d", &n);

    if(n > MAX) {
        printf("Limit exceeded.\n");
        return 0;
    }

    printf("Enter roll numbers:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", rolls + i);
        status[i] = 0;   
    }

    while(1) {
        printf("\n1. Mark Present\n");
        printf("2. Mark Absent\n");
        printf("3. Check Attendance\n");
        printf("4. Show Summary\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if(choice == 1) {
            printf("Enter roll to mark present: ");
            scanf("%d", &r);
            pos = search(rolls, n, r);
            if(pos == -1)
                printf("Roll not found.\n");
            else {
                status[pos] = 1;
                printf("Marked present.\n");
            }
        }

        else if(choice == 2) {
            printf("Enter roll to mark absent: ");
            scanf("%d", &r);
            pos = search(rolls, n, r);
            if(pos == -1)
                printf("Roll not found.\n");
            else {
                status[pos] = 0;
                printf("Marked absent.\n");
            }
        }

        else if(choice == 3) {
            printf("Enter roll to check: ");
            scanf("%d", &r);
            pos = search(rolls, n, r);
            if(pos == -1)
                printf("Roll not found.\n");
            else {
                printf("Roll %d is %s.\n", r, status[pos] ? "Present" : "Absent");
            }
        }

        else if(choice == 4) {
            showAttendance(rolls, status, n);
        }

        else if(choice == 5) {
            break;
        }

        else {
            printf("Invalid choice.\n");
        }
    }

    return 0;
}



