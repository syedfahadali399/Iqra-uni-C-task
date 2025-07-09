#include <stdio.h>

int main() {
    // Find out the sum of series 12 + 22 + …. + n2
    int n;
    int sum;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    sum = (n * (n + 1) * (2 * n + 1)) / 6;

    printf("Sum of series 1^2 + 2^2 + ... + %d^2 = %d\n", n, sum);

    return 0;
}
