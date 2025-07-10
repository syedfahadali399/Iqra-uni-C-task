#include <stdio.h>
int main() {

    // Write a program to record the temperatures (in Celsius) for a week (7 days). Store these temperatures in an array and then calculate and display the average temperature for the week.

    int arr[7];
    int sum = 0;
    int average;

    for(int i = 0; i < 7; i++) {
        printf("Enter 7 day Temprature: ");
        scanf("%d", &arr[i]);

        sum += arr[i];
    }

    average = (sum) / 7;

    printf("The average of 7 day tmeprature is %d", average);
}