#include <stdio.h>

int swap(int *num1,int *num2) {
    int temp;

    temp = *num1;
    *num1 = *num2;
    *num2 = temp;

}

int main() {
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d" ,&num2);

    printf("Before Swap\n");
    printf("value of a = %d, value of b = %d\n",num1,num2);

    swap(&num1,&num2);

    printf("After Swap\n");
    printf("value of a = %d, value of b = %d",num1,num2);
}