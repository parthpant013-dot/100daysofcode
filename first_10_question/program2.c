// Write a program to input two numbers and display their sum, difference, product, and quotient.


#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int sum = a + b;
    int diff = a - b;
    int product = a * b;

    printf("Sum=%d, Diff=%d, Product=%d", sum, diff, product);

    if (b != 0) {
        int quotient = a / b;   
        printf(",Quotient=%d\n", quotient);
    } else {
        printf(",Quotient=Undefined \n");
    }

    return 0;
}