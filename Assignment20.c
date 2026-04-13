#include <stdio.h>

void swap(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("After swap function (swapping without pointers): num1 = %d, num2 = %d\n", a, b);
}

void swap_pointers(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    printf("After swap_pointers function (swapping with pointers): num1 = %d, num2 = %d\n", *x, *y);
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("\nOriginal values inside main: num1 = %d, num2 = %d\n", num1, num2);
    swap(num1, num2);
    swap_pointers(&num1, &num2);
    return 0;
}