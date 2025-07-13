#include <stdio.h>

int count_digits(int n) {
    if (n < 10) {
        return 1; 
    } else {
        return 1 + count_digits(n / 10);  
    }
}

int main() {
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive number.\n");
        return 1;
    }

    int count = count_digits(n);
    printf("Number of digits in %d is: %d\n", n, count);

    return 0;
}
