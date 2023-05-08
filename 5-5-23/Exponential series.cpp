#include <stdio.h>

int main() {
    double x, term, sum;
    int i, j, fact;

    printf("Enter the value of x: ");
    scanf("%lf", &x);

    sum = 1; 
    term = 1; 

    for (i = 1; i <= 10; i++) { 
        term *= (-x) / i; 
        sum += term; 

        printf("Term %d: %lf\n", i, term); 
    }

    printf("e^(-%lf) = %lf\n", x, sum); 

    return 0;
}

