#include <stdio.h>
#include <string.h>
int main () {
    char full_name[50];

    printf("enter your full name: ");
    scanf("%s", full_name);

    printf("Welcome %s", full_name);
}