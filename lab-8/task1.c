#include <stdio.h>
int main() {

    int x = 10;
    int *ptr = &x;

    printf("value of x %d \n",x);
    printf("address of x %d \n", &x);
    printf("address of ptr from x %d \n", ptr);
    printf("value of ptr from x %d \n", *ptr);

}