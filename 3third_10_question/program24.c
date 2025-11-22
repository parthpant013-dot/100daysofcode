/*
Write a program to calculate electricity bill based on units consumed with these rates:
First 100 units at ₹5/unit
Next 100 units at ₹7/unit
Next 100 units at ₹10/unit
Above at ₹12/unit
*/

#include <stdio.h>

int main() {
    int u,rate=0;
    printf("Enter Units:");
    scanf("%d",&u);
    if (u <= 100) {
        rate = u * 5;
        printf("Bill: ₹%d\n", rate);
    }
    else if (u<=200){
        rate=(100*5)+(u-100)*7;
        printf("Bill: ₹%d\n", rate);
    }
    else if (u<=300){
        rate=(100*5)+(100*7)+(u-200)*10;
        printf("Bill: ₹%d\n", rate);
    }

    else {
        rate=(100*5)+(100*7)+(100*10)+(u-300)*12;
        printf("Bill: ₹%d\n", rate);
    }
    return 0;
}