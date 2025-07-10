#include <stdio.h>

// ⦁	Write a C program that takes an array of integers and its size as inputs, and sorts the array in ascending order using the Bubble Sort algorithm. Display the sorted array in the main function.

void bubbleSort(int arr[], int size) {
    int temp;
    
    for (int i = 0; i < size - 1; i++) {
        // Last i elements are already in place
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[100], size;

    // Input array size
    printf("Enter the number of elements: ");
    scanf("%d", &size);

    // Input array elements
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Sort the array
    bubbleSort(arr, size);

    // Print sorted array
    printf("Sorted array in ascending order:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
