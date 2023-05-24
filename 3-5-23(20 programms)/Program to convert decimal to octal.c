#include <stdio.h>

int main() {
    int decimal, quotient, remainder, octal = 0, i = 1;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    quotient = decimal;

    while (quotient != 0) {
        remainder = quotient % 8;
        octal += remainder * i;
        quotient /= 8;
        i *= 10;
    }

    printf("The octal equivalent of %d is %d\n", decimal, octal);

    return 0;
}

