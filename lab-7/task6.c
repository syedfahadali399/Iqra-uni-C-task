#include <stdio.h>

int power(int x, int y) {
    if (y == 0) {
        return 1;
    } else {
        return x * power(x, y - 1);  
    }
}

int main() {
    int base, exponent;

    printf("Enter base (x): ");
    scanf("%d", &base);

    printf("Enter exponent (y): ");
    scanf("%d", &exponent);

    if (exponent < 0) {
        printf("This simple recursive function doesn't handle negative powers.\n");
    } else {
        int result = power(base, exponent);
        printf("%d^%d = %d\n", base, exponent, result);
    }

    return 0;
}