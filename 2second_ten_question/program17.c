// Write a program to find the roots of a quadratic equation and categorize them.

#include <stdio.h>
#include <math.h>

int main() {
    int a,b,c,x,y;
    scanf("%d %d %d",&a,&b,&c);
    int D=((b*b)-(4*a*c));
    x=((-b)+sqrt(D))/(2*a);
    y=((-b)-sqrt(D))/(2*a);
    if (D>0){
        printf("Roots are real and different: %d %d",x,y);
    }   
    else if (D==0){
        printf("Roots are real and different: %d",x);
    }   
    else {
        printf("Roots are complex");
    }   
    return 0;
}