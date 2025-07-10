#include <stdio.h>
int main () {

    // Write a C program that takes an array of integers as input and outputs the array in reverse order. The program should work for arrays of any size up to 100 elements.

    int arr[10];

    for(int i = 0; i < 9; i++){
        printf("Enter values: ");
        scanf("%d", &arr[i]);
    }

    printf("Unreverse Form \n");
    for(int i = 0; i < 9; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nReverse Form \n");
    for(int i = 8; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
}