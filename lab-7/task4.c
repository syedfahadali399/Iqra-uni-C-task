#include <stdio.h>

int fibonacci(int n){
    if (n == 0) return 0;           
    else if (n == 1) return 1;     
    else return fibonacci(n - 1) + fibonacci(n - 2);
}
int main() {
    int n;

    printf("Enter any number: ");
    scanf("%d", &n);

    if(n < 0) {
        printf("Enter number greater than 1");
        return 1;
    }

    int result = fibonacci(n);
    printf("The fibanocci sires of %d is %d",n,result);
}