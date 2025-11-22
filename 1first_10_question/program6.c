// Write a program to swap two numbers using a third variable

#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d",&a,&b);
    c=b;
    b=a;
    printf("After swap: %d %d",c,b);
    return 0;
}