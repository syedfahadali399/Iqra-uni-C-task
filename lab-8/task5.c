#include <stdio.h>
int main() {
    int x = 10;
    int *ptr = &x;


    printf("x value %d \n", x);
    printf("ptr value %d \n", *ptr);
    printf("ptr address %d \n", ptr);

    *ptr = 25;

    printf("x value %d \n", x);
    printf("x updated value %d \n", *ptr);
    printf("ptr address %d \n", ptr);

}