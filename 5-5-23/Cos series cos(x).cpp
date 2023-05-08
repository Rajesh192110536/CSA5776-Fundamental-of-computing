#include <stdio.h>
#include <math.h>

int main() {
    double x, term, cos_x, sign;
    int i, j;
    
    printf("Enter the angle in radians: ");
    scanf("%lf", &x);
    
    cos_x = 1;
    sign = -1; 
    
    for (i = 2, j = 2; i <= 20; i += 2, j++) {
        term = pow(x, i) / tgamma(i + 1); 
        term *= sign; 
        cos_x += term;
        sign *= -1; 
        
        printf("Term %d: %lf\tCosine Approximation: %lf\n", j, term, cos_x);
    }
    
    printf("Final Cosine Approximation: %lf\n", cos_x);
    
    return 0;
}

