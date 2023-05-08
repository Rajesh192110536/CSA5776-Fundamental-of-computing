#include <stdio.h>

int main() {
    int octal, decimal = 0, power = 1;

    printf("Enter an octal number: ");
    scanf("%d", &octal);

    while (octal > 0) {
        int digit = octal % 10;
        decimal += digit * power;
        power *= 8;
        octal /= 10;
    }

    printf("Decimal equivalent: %d", decimal);

    return 0;
}

