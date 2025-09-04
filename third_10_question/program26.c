// Write a program to print numbers from 1 to n.

#include <stdio.h>

int main() {
    int n;
    printf("Enter Number:");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        printf("%d ",i);

    }
    return 0;
}