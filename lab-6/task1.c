#include <stdio.h>

int average(int a, int b, int c) {
    int sum;
    int average;
    sum = a + b + c;
    average = (sum) / 3;
    return average;
}

int main() {

    int num1, num2, num3;

    printf("Enter 1st Number: ");
    scanf("%d", &num1);
    printf("Enter 2nd Number: ");
    scanf("%d", &num2);
    printf("Enter 3rd Number: ");
    scanf("%d", &num3);

    int show = average(num1, num2, num3);
    printf("The average of three number is %d", show);
}