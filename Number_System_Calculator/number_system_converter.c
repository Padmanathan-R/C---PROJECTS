#include <stdio.h>

void BinaryToDecimal(void);
void DecimalToBinary(void);
void BinaryToHexa(void);
void HexaToBinary(void);

int main() 
{
    int choice;
    printf("Number System Converter\n");
    printf("1 --> Binary to Decimal\n");
    printf("2 --> Decimal to Binary\n");
    printf("3 --> Binary to Hexa\n");
    printf("4 --> Hexa to Binary\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) 
    {
        case 1: 
            BinaryToDecimal();
            break;
        case 2:
            DecimalToBinary();
            break;
        case 3:
            BinaryToHexa();
            break;
        case 4:
            HexaToBinary();
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}

// 1. Convert Binary to Decimal
void BinaryToDecimal(void) 
{
    int n, sum = 0, pow = 1;
    printf("Enter a Binary number: ");
    scanf("%d", &n);
    
    if (n == 0)
    {
        printf("Decimal Value =0\n");
        return;
    }
    
    while (n > 0) 
    {
        sum += (n % 10) * pow;
        pow *= 2;
        n /= 10;
    }
    
    printf("Decimal value = %d\n", sum);
    
}

// 2. Convert Decimal to Binary
void DecimalToBinary(void) 
{
    int n, binary[32], i = 0;
    printf("Enter a Decimal number: ");
    scanf("%d", &n);

    if (n == 0) 
    {
        printf("Binary Value = 0\n");
        return;
    }

    while (n > 0) 
    {
        binary[i++] = n % 2;
        n /= 2;
    }

    printf("Binary Value = ");
    for (int j = i - 1; j >= 0; j--)
        printf("%d", binary[j]);
    printf("\n");
}

// 3. Convert Binary to Hexa
void BinaryToHexa(void) 
{
    int x, decimal = 0, pow = 1;
    printf("Enter a Binary number: ");
    scanf("%d", &x);

    while (x > 0) 
    {
        decimal += (x % 10) * pow;
        pow *= 2;
        x /= 10;
    }

    printf("Hexa Value = %x\n", decimal);
}

// 4. Convert Hexa to Binary
void HexaToBinary(void) 
{
    int decimal;
    printf("Enter a Hexadecimal number (without 0x, e.g. 1A): ");
    scanf("%x", &decimal);  // %x directly reads hex input

    int binary[32], i = 0;
    if (decimal == 0) 
    {
        printf("Binary Value = 0\n");
        return;
    }

    while (decimal > 0) 
    {
        binary[i++] = decimal % 2;
        decimal /= 2;
    }

    printf("Binary Value = ");
    for (int j = i - 1; j >= 0; j--)
        printf("%d", binary[j]);
    printf("\n");
}


