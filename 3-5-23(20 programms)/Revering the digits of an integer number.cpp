#include <stdio.h>

int main() {
    int number, reversed = 0;

    printf("Enter an integer: ");
    scanf("%d", &number);

    while (number != 0) {
        int digit = number % 10;
        reversed = reversed * 10 + digit;
        number /= 10;
    }

    printf("The reversed number is: %d", reversed);

    return 0;
}

