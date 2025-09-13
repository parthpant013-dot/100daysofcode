// Wite a program to take a number as input and print its equivalent binrary representation.
#include <stdio.h> 
int main() 
{ 
    int n,a,x=0,y=1; 
    printf("Enter Number:"); 
    scanf("%d",&n);
    while (n>0) 
    { 
        a=n%2;
        x=x+a*y; 
        n/=2; y=y*10; 
    } 
    printf("%d",x); 
    return 0;
}