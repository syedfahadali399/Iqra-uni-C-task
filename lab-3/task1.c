#include <stdio.h>
int main() {
    // Write a program that prompts the user to enter a positive integer and calculates the sum of all integers from 1 to that number using a while loop.
    int number,sum;

    printf("Enter any Number: ");
    scanf("%d", &number);

    while(number > 0) {
        sum += number;
        number --;
    }

    printf("The Sum of all Number is %d", sum);
}