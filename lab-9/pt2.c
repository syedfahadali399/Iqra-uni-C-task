#include<stdio.h>
#include<string.h>
int main() {
    char name[100];
    char new_name[100];
    char new_concat[100];

    printf("Enter your name: ");
    scanf("%s", name);

    // Uppercase
    strupr(name);
    printf("%s \n", name);

    // Lowercase
    strlwr(name);
    printf("%s \n", name);

    // length of the string
    printf("%d \n", strlen(name));

    // Copy string data into another variable
    strcpy(new_name, name);
    printf("New name %s \n", new_name);

    // Compare two string and return 0 if equal
    printf("%s \n", strcmp(new_name, name));

    // Concat two string
    printf("%s \n", strcat(new_name, name));

    // allow only 3 word fron new_name variable
    strncat(name, new_name, 3);
    printf("The new name is %s \n", name);

    // allow only 3 word fron new_name variable
    strncpy(name, new_name, 7);
    printf("the new name is %s", name);

}