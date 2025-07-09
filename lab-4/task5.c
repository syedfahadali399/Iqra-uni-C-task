#include <stdio.h>

int main() {
    // If a four-digit number is input through the keyboard, write a program to obtain the sum of the first and last digit of this number.
    int num, firstDigit, lastDigit;

    printf("Enter a four-digit number: ");
    scanf("%d", &num);

    lastDigit = num % 10;

    while (num >= 10) {
        num = num / 10;
    }

    firstDigit = num;

    printf("Sum of first and last digit = %d\n", firstDigit + lastDigit);

    return 0;
}

