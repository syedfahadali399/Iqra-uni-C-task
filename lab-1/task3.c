#include <stdio.h>
int main () {

    int fahrenheit,celsius;

    printf("Enter the Temprature In Celsius: ");
    scanf("%d", &celsius);

    fahrenheit = (celsius * 9/5) + 32;

    printf("The Temprature in fahrenheit is %dF", fahrenheit);
}