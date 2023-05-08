#include <stdio.h>

int main() {
    int n, i, sum = 0;
    
    printf("Enter the last number in the sequence: ");
    scanf("%d", &n);
    
    for (i = 2; i <= n; i += 2) {
        sum += i * i;
    }
    
    printf("The sum of the sequence is %d\n", sum);
    
    return 0;
}

