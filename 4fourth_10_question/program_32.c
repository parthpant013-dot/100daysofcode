// Write a program to check if a number is a palindrome.

#include <stdio.h>

int main() {
    int n,a,rev=0;
    printf("Enter Number:");
    scanf("%d",&n);   
    int original=n;
    
    while (n>0)
    {
        a=n%10;
        rev=rev*10+a;
        n/=10;
    }
    
    if (original==rev){
        printf("Number is palindrone");
    }
    else {
        printf("Number is Not palindrone");
    }
    return 0;
}