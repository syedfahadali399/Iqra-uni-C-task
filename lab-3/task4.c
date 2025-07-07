#include <stdio.h>
int main() {
    // Use a while loop to keep accepting input until the user enters a zero (0) to stop.

    int number;

    printf("Enter any Number (stop enter 0): ");
    scanf("%d", &number);

    while(number != 0) {
        printf("Enter any Number (stop enter 0): ");
        scanf("%d", &number);

    }

    printf("Number 0 is press!!!");
}