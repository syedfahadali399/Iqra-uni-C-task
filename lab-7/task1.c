#include <stdio.h>

int sum(int n) {

    printf("Entering sum(%d)\n", n); 
    
    if (n == 1) {
        printf("Base case reached: sum(1) = 1\n");
        return 1;
    } else {
        int result = n + sum(n - 1);
        printf("Returning from sum(%d): %d\n", n, result);
        return result;
    }
}

int main() {
    int n;

    printf("Enter any number to perform calculation: ");
    scanf("%d", &n);

    if(n <= 1) {
        printf("Please enter number greater than 1");
        return 1;
    }

    int result = sum(n);
    printf("The sum of %d number to 1 is %d", n,result);
}