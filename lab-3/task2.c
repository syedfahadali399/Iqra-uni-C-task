#include <stdio.h>

int main() {
    // Create a program that continuously asks the user to enter a number until they enter a negative number. Use a do while loop.
    int number;

    do {
        printf("Enter a number (negative number to stop): ");
        scanf("%d", &number);
    } while (number >= 0);

    printf("You entered a negative number. Program ended.\n");

    return 0;
}
