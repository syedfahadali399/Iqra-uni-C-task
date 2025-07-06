#include <stdio.h>
int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if(age >= 18){
        printf("You are Eligible to Vote");
    } else {
        printf("You are Ineligible to Vote");
    }
}