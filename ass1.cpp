// Online C compiler to run C program online
/*
Name: John maina njeru
Reg:CT100/G/26157/25
Description:Height,weight and phone number for the user program 
*/

#include <stdio.h>

int main() {
    float weight, height;
    long long phone;

    // Input weight
    printf("Enter your weight (kg): ");
    scanf("%f", &weight);

    // Input height
    printf("Enter your height (cm): ");
    scanf("%f", &height);

    // Input phone number
    printf("Enter your phone number: ");
    scanf("%lld", &phone);

    // Display results
    printf("\n--- Your Details ---\n");
    printf("Weight: %.2f kg\n", weight);
    printf("Height: %.2f cm\n", height);
    printf("Phone Number: %lld\n", phone);

    return 0;
}