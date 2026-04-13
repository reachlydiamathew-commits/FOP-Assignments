#include <stdio.h>
int main() {
    int num1, num2, i, gcd, temp, min, found = 0;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    min = (num1 < num2) ? num1 : num2;
    for(i = 2; i <= min; i++) {
        if(num1 % i == 0 && num2 % i == 0) {
            printf("Smallest Common Divisor: %d\n", i);
            found = 1;
            break;
        }
    }
    if(found == 0) {
        printf("No common divisor other than 1\n");
    }
    int a = num1, b = num2;
    while(b != 0) {
        temp = a % b;
        a = b;
        b = temp;
    }
    gcd = a;
    printf("Greatest Common Divisor (GCD): %d\n", gcd);
    return 0;
}
