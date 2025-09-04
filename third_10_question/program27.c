// Write a program to print the sum of the first n odd numbers.

#include <stdio.h>

int main() {
    int n,sum=0,odd;
    printf("Enter Number:");
    scanf("%d",&n);

    for (int i=0;i<n;i++){
        odd=(2*i)+1;
        sum+=odd;
    }
    printf("%d",sum);
    return 0;
}