#include <stdio.h>
#include <string.h>
int main() {
    char first_name[20];
    char last_name[20];
    char full_name[40];

    printf("Enter your first name (max 20 words): ");
    scanf("%s", first_name);

    printf("Enter your last name (max 20 words): ");
    scanf("%s", last_name);

    strcpy(full_name, first_name);
    strcat(full_name, " ");
    strcat(full_name, last_name);

    printf("Your full name is %s", full_name);
}