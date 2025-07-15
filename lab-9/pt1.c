#include <stdio.h>
int main () {
    char name[100];
    int count = 0;

    printf("enter your name: ");
    scanf("%s", name);


    while(name[count] != '\0'){
        count++;
    }

    printf("The length of the name is %d", count);
}