#include <stdio.h>

void decimalToHexadecimal(int n)
{
    char hex[32];
    int i = 0;

    while (n > 0)

    {
        int remainder = n % 16;
        if (remainder < 10)
        {
            hex[i] = remainder + '0';
        }
        else
        {
            hex[i] = remainder - 10 + 'A';
        }
        n = n / 16;
        i++;
    }

    printf("Hexadecimal: ");
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%c", hex[j]);
    }
    printf("\n");
}

int main()
{
    int decimal;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    if (decimal >= 0)
    {
        decimalToHexadecimal(decimal);
    }
    else
    {
        printf("Please enter a non-negative integer.\n");
    }

    return 0;
}
