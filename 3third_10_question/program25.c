// Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include <stdio.h>

int main() {
    int x,y;
    char a;
    printf("Enter Numbers and (+, -, *, /, %%):");
    scanf("%d %d %c", &x,&y,&a);
    switch (a)
    {
    case '+':
        printf("%d",x+y);
        break;
    case '-':
        printf("%d",x-y);
        break;
    case '*':
        printf("%d",x*y);
        break;
    case '/':
        printf("%d",x/y);
        break;
    case '%':
        printf("%d",x%y);
        break;
    
    default:
        break;
    }

    return 0;
}