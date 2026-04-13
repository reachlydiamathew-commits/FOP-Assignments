#include <stdio.h>
int factorial_recursive(int n){
    if(n == 0 || n == 1)
        return 1;
    else
        return n * factorial_recursive(n - 1);
}
int main(){
    int n, i;
    long long fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n < 0) {
        printf("Factorial not defined for negative numbers");
    }
    else {
        for(i = 1; i <= n; i++) {
            fact = fact * i;
        }
        printf("Factorial (Iterative) = %lld\n", fact);
        printf("Factorial (Recursive) = %d", factorial_recursive(n));
    }
    return 0;
}