#include <stdio.h>
int main () {

    int a,b,temp;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Before Swap\n");
    printf("First Number %d, Second Number %d\n", a,b);

    temp = a;
    a = b; 
    b = temp;

    printf("After Swap\n");
    printf("First Number %d, Second Number %d", a,b);
}