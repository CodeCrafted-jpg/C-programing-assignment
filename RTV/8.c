// 8. Railway Seat Reservation Mini Project (Array Indexing)
// Features:
// • 1D array to represent 50 seats (0 = empty, 1 = booked)
// • Booking, cancelling, viewing seats
// • Functions for each
// • Pointer for seat update
// Real use: Basic reservation logic.

#include <stdio.h>

#define SEATS 50

void view(int *arr) {
    printf("\nSeat Status (0 = empty, 1 = booked)\n");
    for(int i = 0; i < SEATS; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

void book(int *arr) {
    int num;
    printf("Enter seat number to book (1-50): ");
    scanf("%d", &num);

    if(num < 1 || num > SEATS) {
        printf("Invalid seat number.\n");
        return;
    }

    if(*(arr + (num - 1)) == 1) {
        printf("Seat already booked.\n");
    } else {
        *(arr + (num - 1)) = 1;       
        printf("Seat %d booked.\n", num);
    }
}

void cancel(int *arr) {
    int num;
    printf("Enter seat number to cancel (1-50): ");
    scanf("%d", &num);

    if(num < 1 || num > SEATS) {
        printf("Invalid seat number.\n");
        return;
    }

    if(*(arr + (num - 1)) == 0) {
        printf("Seat is not booked.\n");
    } else {
        *(arr + (num - 1)) = 0;        
        printf("Seat %d cancelled.\n", num);
    }
}

int main() {
    int seats[SEATS] = {0};  
    int choice;

    while(1) {
        printf("\nRailway Reservation\n");
        printf("1. Book Seat\n");
        printf("2. Cancel Seat\n");
        printf("3. View Seats\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if(choice == 1) {
            book(seats);
        }
        else if(choice == 2) {
            cancel(seats);
        }
        else if(choice == 3) {
            view(seats);
        }
        else if(choice == 4) {
            printf("Thank you.\n");
            break;
        }
        else {
            printf("Invalid choice.\n");
        }
    }

    return 0;
}
