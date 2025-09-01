#include <stdio.h>

int main() {
    int age;
    char format;
    int showtime;
    float price = 0;

   
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Choose format : ");
    scanf(" %c", &format); 

    printf("Enter showtime : ");
    scanf("%d", &showtime);

    if (age <= 12) {
        price = 100;
    } else if (age >= 60) {
        price = 150;
    } else {
        price = 200;
    }

    if (format == 'D' || format == 'd') {
        price += 80;
    }

   
    if (showtime < 1800) {
        price = price * 0.85; 
    }

   
    printf(" 💵 Your final ticket price is: ₹%.2f\n", price);

    return 0;
}
