// Write a program to convert temperature from Celsius to Fahrenheit.


#include <stdio.h>
int main() {
    float celsius, fahrenheit;
    printf("celsius :");
    scanf("%f", &celsius);
    fahrenheit = (9.0 / 5.0) * celsius + 32;
    printf("Fahrenheit=%.0f\n", fahrenheit);

    return 0;
}

