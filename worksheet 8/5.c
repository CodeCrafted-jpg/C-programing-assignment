#include <stdio.h>

float toFahrenheit(float celsius) {
    return (celsius * 1.8) + 32.0;
}

float toCelsius(float fahrenheit) {
    return (fahrenheit - 32.0) * (5.0 / 9.0);
}

float toKelvin(float celsius) {
    return celsius + 273.15;
}

int main() {
    int choice;
    float temperature;

    printf("--- Temperature Conversion System ---\n");

    printf("Select a conversion type:\n");
    printf("1. Celsius to Fahrenheit & Kelvin\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("3. Celsius to Kelvin (Specific)\n");
    printf("4. Exit\n");
    printf("Enter your choice (1-4): ");

    if (scanf("%d", &choice) != 1) {
        printf("Invalid input. Exiting.\n");
        return 1;
    }

    switch (choice) {
        case 1:
            printf("\nEnter temperature in Celsius (°C): ");
            if (scanf("%f", &temperature) == 1) {
                float fahrenheit = toFahrenheit(temperature);
                printf("%.2f°C is equal to %.2f°F\n", temperature, fahrenheit);

                float kelvin = toKelvin(temperature);
                printf("%.2f°C is also equal to %.2fK\n", temperature, kelvin);
            } else {
                 printf("Invalid temperature input.\n");
            }
            break;

        case 2:
            printf("\nEnter temperature in Fahrenheit (°F): ");
            if (scanf("%f", &temperature) == 1) {
                float celsius = toCelsius(temperature);
                printf("%.2f°F is equal to %.2f°C\n", temperature, celsius);
            } else {
                 printf("Invalid temperature input.\n");
            }
            break;

        case 3:
            printf("\nEnter temperature in Celsius (°C): ");
            if (scanf("%f", &temperature) == 1) {
                float kelvin = toKelvin(temperature);
                printf("%.2f°C is equal to %.2fK\n", temperature, kelvin);
            } else {
                 printf("Invalid temperature input.\n");
            }
            break;

        case 4:
            printf("Exiting the program. Goodbye!\n");
            break;

        default:
            printf("Invalid choice. Please select 1, 2, 3, or 4.\n");
            break;
    }

    return 0;
}