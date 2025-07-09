#include <stdio.h>

int main() {
    int a, b, gcd = 1, lcm, min;

    printf("Enter first numbers: ");
    scanf("%d", &a);
    printf("Enter second numbers: ");
    scanf("%d", &b);

    // Find GCD using loop
    min = (a < b) ? a : b;
    for (int i = 1; i <= min; i++) {
        if (a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }

    // Calculate LCM using formula
    lcm = (a * b) / gcd;

    printf("GCD (HCF) = %d\n", gcd);
    printf("LCM = %d\n", lcm);

    return 0;
}
