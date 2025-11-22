// Write a program to input time in seconds and convert it to hours:minutes:seconds format

#include <stdio.h>

int main() {
    int sec,hours,min;
    printf("Enter Seconds:");
    scanf("%d",&sec);
    hours=sec/3600;
    min=(sec%3600)/60;
    sec=sec%60;
    printf("%d:%d:%d",hours,min,sec);

    return 0;
}