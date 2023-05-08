#include <stdio.h>
#include <math.h>

int main() {
    double x, sum = 0;
    int n, sign = 1, i, fact;
    printf("Enter the value of x in radians: ");
    scanf("%lf", &x);
    printf("Enter the number of terms in the series: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i += 2) {
        fact = 1;
        for (int j = 1; j <= i; j++) {
            fact *= j;
        }
        sum += sign * pow(x, i) / fact;
        sign *= -1;
    }
    printf("The value of sin(%.2f) using %d terms in the series is: %.4f\n", x, n, sum);
    return 0;
}

