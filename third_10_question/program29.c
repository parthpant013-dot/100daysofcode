// Write a program to calculate the factorial of a number.

#include <stdio.h>

int main() {
    int n,i,fact=1;
    printf("Enter Number:");
    scanf("%d",&n);

    for (i=1;i<=n;i++){
        fact*=i;

    }
    printf("%d",fact);
    return 0;
}