#include <stdio.h>
#include <math.h>

int binaryToDecimal(long long binary) {
    int decimal = 0, i = 0;
    
    while (binary > 0) {
        int digit = binary % 10; // Extract the last digit
        if (digit == 1 || digit == 0) {
            decimal += digit * pow(2, i); // Add to decimal value
            binary /= 10; // Remove the last digit
            i++;
        } else {
            printf("Invalid binary number.\n");
            return -1; // Error case
        }
    }
    return decimal;
}

int main() {
    long long binary;

    // Take binary input from the user
    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    int decimal = binaryToDecimal(binary);
    if (decimal != -1) {
        printf("Decimal: %d\n", decimal);
    }

    return 0;
}
