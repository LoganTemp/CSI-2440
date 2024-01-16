#include <stdio.h>

// Created by Logan Templin
// Last Edit: 01/15/2024

double kgToLb(double kg);
double gramToOunce(double gram);
double kmToMile(double km);
double mmToInch(double mm);

int main() {
    int choice;
    double value;

    printf("Simple Metric Conversion App\n");

    while (1) {
        // Menu
        printf("\nChoose a conversion:\n");
        printf("1. Kilograms to Pounds\n");
        printf("2. Grams to Ounces\n");
        printf("3. Kilometers to Miles\n");
        printf("4. Millimeters to Inches\n");
        printf("-1. Exit\n");

        // User input
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == -1) {
            // Exit the program
            printf("Exiting the program. Goodbye!\n");
            break;
        }

        // Get the value for conversion
        printf("Enter the value for conversion: ");
        scanf("%lf", &value);

        // Perform the conversion based on user choice
        switch (choice) {
            case 1:
                printf("%.2f kg is %.2f lb\n", value, kgToLb(value));
                break;
            case 2:
                printf("%.2f grams is %.2f ounces\n", value, gramToOunce(value));
                break;
            case 3:
                printf("%.2f km is %.2f miles\n", value, kmToMile(value));
                break;
            case 4:
                printf("%.2f mm is %.2f inches\n", value, mmToInch(value));
                break;
            default:
                printf("Invalid choice. Please choose a valid option.\n");
        }
    }

    return 0;
}

// Conversion functions
double kgToLb(double kg) {
    return kg * 2.20462;
}

double gramToOunce(double gram) {
    return gram * 0.03527396;
}

double kmToMile(double km) {
    return km * 0.621371;
}

double mmToInch(double mm) {
    return mm * 0.0393701;
}
