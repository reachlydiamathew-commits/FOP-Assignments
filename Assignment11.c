#include <stdio.h>
#include <math.h>
int main() {
    int choice, n, i, isPrime = 1;
    long long fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("\n1. Square Root\n2. Square\n3. Cube\n4. Prime Check\n5. Factorial\n6. Prime Factors\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch(choice) {
        case 1:
            if(n < 0)
                printf("Square root not defined for negative numbers");
            else
                printf("Square Root = %.2f", sqrt(n));
            break;
        case 2:
            printf("Square = %d", n * n);
            break;
        case 3:
            printf("Cube = %d", n * n * n);
            break;
        case 4:
            if(n <= 1)
                isPrime = 0;
            else {
                for(i = 2; i <= n/2; i++) {
                    if(n % i == 0) {
                        isPrime = 0;
                        break;
                    }
                }
            }
            if(isPrime)
                printf("%d is a Prime number", n);
            else
                printf("%d is not a Prime number", n);
            break;

        case 5:
            if(n < 0)
                printf("Factorial not defined for negative numbers");
            else {
                for(i = 1; i <= n; i++) {
                    fact = fact * i;
                }
                printf("Factorial = %lld", fact);
            }
            break;

        case 6:
            printf("Prime factors: ");
            for(i = 2; i <= n; i++) {
                while(n % i == 0) {
                    printf("%d ", i);
                    n = n / i;
                }
            }
            break;
        default:
            printf("Invalid choice");
    }
    return 0;
}