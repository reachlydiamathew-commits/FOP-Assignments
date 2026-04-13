#include <stdio.h>
#include <math.h>

int main() {
    int n, i, sign = 1;
    float x, sum = 0, term;
    long int fact;
    
    printf("Enter the value of x (in radians): ");
    scanf("%f", &x);
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        fact = 1;
        for(int j = 1; j <= (2*i - 1); j++) {
            fact = fact * j;
        }
        term = pow(x, (2*i - 1)) / fact;
        sum = sum + sign * term;
        sign = -sign;
    }
    printf("Sum of sine series = %f", sum);
    return 0;
}