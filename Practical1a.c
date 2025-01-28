#include <stdio.h>

void decimalToBinary(int n) {
    int binary[32]; 
    int i = 0;
    
    while (n > 0) {
        binary[i] = n % 2; 
        n = n / 2;         
        i++;
    }
    
    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

int main() {
    int decimal;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    if (decimal >= 0) {
        decimalToBinary(decimal); 
    } else {
        printf("Please enter a non-negative integer.\n");
    }

    return 0;
}
