/*Write a program to calculate library fine based on late days as follows:
First 5 days late: ₹2/day
Next 5 days late: ₹4/day
Next 20 days days late: ₹6/day
More than 30 days: Membership Cancelled.*/

#include <stdio.h>

int main() {
    int d,fine=0;
    printf("Enter Days:");
    scanf("%d",&d);
    if (d <= 5) {
        fine = d * 2;
        printf("Fine ₹%d\n", fine);
    }
    else if (d<=10) {
        fine=(5*2)+(d-5)*4;
        printf("Fine ₹%d\n", fine);
    }
    else if (d<=30) {
        fine=(5*2)+(5*4)+(d-10)*6;
        printf("Fine ₹%d\n", fine);
    }
    else {
        printf("Membership Cancelled.\n");
    }
    return 0;
}