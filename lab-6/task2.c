#include <stdio.h>

int minimum(int a, int b, int c){
    if(a < b && a < c) {
        return a;
    } else if(b < a && b < c) {
        return b;
    } else {
        return c;
    }
}

int main () {
    int num1, num2, num3;

    printf("Enter 1st Number: ");
    scanf("%d", &num1);
    printf("Enter 2nd Number: ");
    scanf("%d", &num2);
    printf("Enter 3rd Number: ");
    scanf("%d", &num3);

    int show = minimum(num1, num2, num3);
    printf("The minimum number is %d", show);

}