
// Write a C program for a movie ticket booking system using
// functions:
// 1. displayMovies() - Shows available movies with prices
// 2. selectMovie() - Returns user's movie choice
// 3. selectSeats() - Returns number of tickets
// 4. calculateTotal() - Calculates total cost
// 5. printTicket() - Prints booking confirmation
//  Display available movies:
// 1. User selects movie and number of seats
// 2. Calculate total with 10% tax
// 3. Display final ticket with booking ID
// Sample output
// Movie Booking Counter
//  1. Avatar 2 - $12.50
//  2. Avengers - $11.00
//  3. Jurassic World - $10.50
//  Select movie (1-3): 1
//  Number of tickets: 3
// === TICKET CONFIRMED ===
// Booking ID: CB1001
//  Movie: Avatar 2
// Seats: 3
// Total: $41.25
// Thank you!


#include <stdio.h>
#include <string.h>


void dismovies();
int selmovies();
int selSeats();
float caltotal(float price, int seats);
void Print(int movieChoice, int seats, float total);


char movies[3][30] = {"Avatar 2", "Avengers", "Jurassic World"};
float prices[3] = {12.50, 11.00, 10.50};
void dismovies() {
    printf("Available Movies:\n");
    for (int i = 0; i < 3; i++) {
        printf(" %d. %s - $%.2f\n", i + 1, movies[i], prices[i]);
    }
}


int selmovies() {
    int choice;
    printf("Select movie (1-3): ");
    scanf("%d", &choice);

    
    while (choice < 1 || choice > 3) {
        printf("Invalid choice! Please enter 1-3: ");
        scanf("%d", &choice);
    }
    return choice;
}


int selSeats() {
    int seats;
    printf("Number of tickets: ");
    scanf("%d", &seats);

    while (seats <= 0) {
        printf("Invalid number! Enter again: ");
        scanf("%d", &seats);
    }
    return seats;
}


float caltotal(float price, int seats) {
    float subtotal = price * seats;
    float total = subtotal + (subtotal * 0.10);  
    return total;
}


void Print(int movieChoice, int seats, float total) {
    printf("\n=== TICKET CONFIRMED ===\n");
    printf("Booking ID: CB1001\n");
    printf("Movie: %s\n", movies[movieChoice - 1]);
    printf("Seats: %d\n", seats);
    printf("Total: $%.2f\n", total);
    printf("Thank you!\n");
}

int main() {
    int movieChoice, seats;
    float total;

    printf("===== MOVIE BOOKING COUNTER =====\n");

    dismovies();
    movieChoice = selmovies();
    seats = selSeats();
    total = caltotal(prices[movieChoice - 1], seats);

    Print(movieChoice, seats, total);

    return 0;
}



