// Write a program to input a year and check whether it is a leap year or not using conditional statements.




#include <stdio.h>

int main() {
    int n;
    printf("Enter a Year:");
    scanf("%d",&n);
    if ((n%400==0) || (n%100!=0 && n%4==0) ){
        printf("Leap year");
        
    } 
    else{
        printf("Not a Leap year");
    }
    return 0;
}