#include <stdio.h>

float prices[3], total, discount, finalBill;

void inputItems() {
    printf("Enter prices of 3 items: ");
    for (int i = 0; i < 3; i++)
        scanf("%f", &prices[i]);
}

void calculateTotal() {
    total = prices[0] + prices[1] + prices[2];
}

void applyDiscount() {
    if (total < 1000)
        discount = 0;
    else if (total <= 5000)
        discount = total * 0.10;
    else
        discount = total * 0.20;
    finalBill = total - discount;
}

void displayBill() {
    printf("\n----- E-Commerce Bill -----\n");
    printf("Total Amount: ₹%.2f\n", total);
    printf("Discount: ₹%.2f\n", discount);
    printf("Final Bill: ₹%.2f\n", finalBill);
}

int main() {
    inputItems();
    calculateTotal();
    applyDiscount();
    displayBill();
    return 0;
}