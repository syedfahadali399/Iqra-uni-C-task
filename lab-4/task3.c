#include <stdio.h>

int main() {
    int rows = 9;

    for (int i = 0; i < rows; i++) {
        // Print leading spaces
        for (int j = 0; j < i; j++) {
            printf(" ");
        }

        // Print stars with spaces
        for (int k = 0; k < rows - i; k++) {
            printf("* ");
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}
