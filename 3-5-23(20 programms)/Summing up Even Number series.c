#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    for (int i = 2; i <= n; i += 2) {
        sum += i;
    }
    
    printf("The sum of even numbers in the series is: %d", sum);
    return 0;
}

