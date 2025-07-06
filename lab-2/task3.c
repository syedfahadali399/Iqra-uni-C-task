#include <stdio.h>
int main() {

    int num1, num2,result;
    char chioce;

    printf("Enter First Number: ");
    scanf("%d", &num1);

    printf("Enter Second Number: ");
    scanf("%d", &num2);

    printf("Enter Operator: ");
    scanf(" %c", &chioce);

    switch(chioce){
        case '+':
           result = num1 + num2;
           printf("The Sum of two number is %d", result);
           break;
        case '-':
           result = num1 - num2;
           printf("The Sub of two number is %d", result);
           break;
        case '*':
           result = num1 * num2;
           printf("The Mul of two number is %d", result);
           break;
        case '/':
           result = num1 / num2;
           printf("The Divide of two number is %d", result);
           break;
        default:
           printf("Enter Correct Operator");
           break;
    }
}