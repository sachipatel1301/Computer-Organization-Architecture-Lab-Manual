#include <stdio.h>

void decimalToBinary(int n) {
    int binary[32]; // Array to store binary digits
    int i = 0;
    
    // Converting to binary
    while (n > 0) {
        binary[i] = n % 2; // Store remainder
        n = n / 2;         // Update the number
        i++;
    }
    
    // Print the binary number in reverse order
    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

int main() {
    int decimal;

    // Take input from the user
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    if (decimal >= 0) {
        decimalToBinary(decimal); // Convert and display binary
    } else {
        printf("Please enter a non-negative integer.\n");
    }

    return 0;
}
