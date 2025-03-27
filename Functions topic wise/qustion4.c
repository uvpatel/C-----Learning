#include <stdio.h>

float priceValue(float value);  // Function prototype

int main() {
    float value;
    printf("Enter value: ");
    scanf("%f", &value);          // Correct format specifier for float
    float finalPrice = priceValue(value);  // Store returned value
    printf("Final price with tax: %.2f\n", finalPrice);  // Print the result
    return 0;
}

float priceValue(float value) {  // Use parameter directly
    float taxedValue = value + (value * 0.18);  // Calculate tax
    return taxedValue;  // Return final price
}
