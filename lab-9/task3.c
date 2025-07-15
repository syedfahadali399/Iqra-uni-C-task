#include<stdio.h>
#include<string.h>
int main() {
    char full_name[100];
    int n, i;

    printf("Enter your name: ");
    scanf("%s", full_name);

    n = strlen(full_name);

    for(i = 0; i < n; i++){
        printf("%c \n", full_name[i]);
    }
}