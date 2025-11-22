// Write a program to calculate the area and circumference of a circle given its radius

#include <stdio.h>

int main() {
    float r,area,circumference;

    printf("Enter Radius of circle :");
    scanf("%f",&r);

    area=3.14*r*r;
    circumference=2*3.14*r;

    printf("Area=%0.2f, Circumference=%0.2f",area,circumference);


    return 0;
} 
