#include <stdio.h>
int main(){
    int choice;
    float a, b, result;
    printf("Menu:\n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    while (choice!=5){
    	switch(choice){
            case 1:
            	result = a + b;
                printf("Addition = %.2f", result);
				printf("Enter your choice: ");
    			scanf("%d", &choice);
            	break;
            case 2:
            	result = a - b;
            	printf("Subtraction = %.2f", result);
            	printf("Enter your choice: ");
    			scanf("%d", &choice);
				break;
            case 3:
            	result = a * b;
	         	printf("Multiplication = %.2f", result);
				printf("Enter your choice: ");
				scanf("%d", &choice);
				break;
            case 4:
            	if(b == 0)
                	printf("Error! Division by zero");
            	else {
                	result = a / b;
                	printf("Division = %.2f", result);
            	}
				printf("Enter your choice: ");
    			scanf("%d", &choice);
            	break;
            default:
            	printf("Invalid choice");
				printf("Enter your choice: ");
    			scanf("%d", &choice);
				break;
    	}
    }
    return 0;
}