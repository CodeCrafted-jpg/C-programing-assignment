// 9. Temperature Analytics (Array + Functions)
// Features:
// • Store 7 days temperatures
// • Functions for:
// o average
// o highest
// o lowest
// • Pointer arithmetic to access array
// Real use: Weather data monitoring.

#include <stdio.h>

double average(int *t, int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += *(t + i); 
    }
    return (double)sum / n;
}
int highest(int *t, int n) {
    int max = *t;
    for(int i = 1; i < n; i++) {
        if(*(t + i) > max) {
            max = *(t + i);
        }
    }
    return max;
}

int lowest(int *t, int n) {
    int min = *t;
    for(int i = 1; i < n; i++) {
        if(*(t + i) < min) {
            min = *(t + i);
        }
    }
    return min;
}

int main() {
    int temp[7];
    int i;

    printf("Enter temperatures for 7 days:\n");
    for(i = 0; i < 7; i++) {
        scanf("%d", temp + i);   
    }

    printf("\nAverage temp : %.2f\n", average(temp, 7));
    printf("Highest temp : %d\n", highest(temp, 7));
    printf("Lowest temp  : %d\n", lowest(temp, 7));

    return 0;
}
