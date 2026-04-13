#include <stdio.h>
int main (){
    int choice;
    float a, b, result;
    int i, n, fact = 1;
    printf("Simple Calculator\n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Power\n6. Factorial\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch(choice){
        case 1:
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
            result = a + b;
            printf("Result = %.2f", result);
            break;
        case 2:
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
            result = a - b;
            printf("Result = %.2f",result);
            break;
        case 3:
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
            result = a * b;
            printf("Result = %.2f", result);
            break;
        case 4:
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
            if(b == 0)
                printf("Error! Division by zero");
            else {
                result = a / b;
                printf("Result = %.2f", result);
            }
            break;
        case 5:
            printf("Enter base and exponent: ");
            scanf("%f %f", &a, &b);
            result = 1;
            for(i = 1; i <= b; i++) {
                result = result * a;
            }
            printf("Result = %.2f", result);
            break;
        case 6:
            printf("Enter a number: ");
            scanf("%d", &n);
            for(i = 1; i <= n; i++) {
                fact = fact * i;
            }
            printf("Result = %d", fact);
            break;
        default:
            printf("Invalid choice");
    }
    return 0;
}
