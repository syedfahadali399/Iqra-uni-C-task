#include <stdio.h>
int main() {
    int x = 10;
    int *ptr = &x;
    int **ptr2 = &ptr;


    printf("value of x %d \n", x);
    printf("address of x %d \n", &x);
    printf("value of ptr %d \n", *ptr);
    printf("address of ptr %d \n", ptr);
    printf("value of double ptr %d \n", **ptr2);
    printf("address of double ptr %d \n", ptr2);
}