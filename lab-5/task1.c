#include <stdio.h>
int main() {

    // Write a C program to store the temperatures recorded over 7 days in an array. Calculate and display the average temperature of the week. Also, find and display the highest and lowest temperatures recorded.

    int arr[7];
    int sum = 0;
    int average;
    int highest;
    int lowest;

    for(int i = 0; i < 7; i++) {
        printf("Enter 7 day temprature: ");
        scanf("%d", &arr[i]);

        sum += arr[i];

        if (arr[i] > highest)
        {
            highest = arr[i];
        }

        if (arr[i] < lowest)
        {
            lowest = arr[i];
        }
        
    }
    
    average = (sum) / 7;

    

    printf("The average temprature of 7 day is %d \n", average);
    printf("The highest temprature of 7 day is %d \n", highest);
    printf("The lowest temprature of 7 day is %d \n", lowest);


}