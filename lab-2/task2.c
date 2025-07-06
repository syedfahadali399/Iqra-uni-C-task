#include <stdio.h>
int main () {

    int sub1, sub2, sub3, sub4, sub5,total;

    printf("Enter First Subject Number: ");
    scanf("%d", &sub1);

    printf("Enter Second Subject Number: ");
    scanf("%d", &sub2);

    printf("Enter Third Subject Number: ");
    scanf("%d", &sub3);

    printf("Enter Fourth Subject Number: ");
    scanf("%d", &sub4);

    printf("Enter Fifth Subject Number: ");
    scanf("%d", &sub5);

    total = sub1 + sub2 + sub3 + sub4 + sub5;

    if(total >= 450) {
        printf("Your Grade is A+");
    } else if(total >= 400) {
        printf("Your Grade is B");
    } else if(total >= 350) {
        printf("Your Grade is C");
    } else if(total >= 300) {
        printf("Your Grade is D");
    } else {
        printf("Your Grade is F");
    }

    printf("Your Total Number is %d", total);
}