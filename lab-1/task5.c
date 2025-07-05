#include <stdio.h>
int main() {
    
    int num1, num2, num3,sum,average;

    printf("Enter First Number: ");
    scanf("%d", &num1);

    printf("Enter Second Number: ");
    scanf("%d", &num2);

    printf("Enter Third Number: ");
    scanf("%d", &num3);

    sum = num1 + num2 + num3;

    average = sum / 3;

    printf("The Sum of three number is %d\n", sum);
    printf("The Average of three number is %d", average);
    
}