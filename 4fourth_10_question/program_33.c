#include <stdio.h>

int main() {
    int n, count = 0, rem, res = 0;
    printf("Enter any number: ");
    scanf("%d", &n);

    int num = n;  

    
    int temp = n;
    while (temp != 0) {
        temp = temp / 10;
        count++;
    }
   
    temp = n;  
    while (temp > 0) {
        rem = temp % 10;

        int mul = 1;          
        int cnt = count;      
        while (cnt > 0) {
            mul = mul * rem;  
            cnt--;
        }

        res = res + mul;      
        temp = temp / 10;     
    }
    if (num==res){
        printf("%d is an Armstrong number\n", num);
    }
     else {
        printf("%d is not an Armstrong number\n", num);
    }

    return 0;
}
