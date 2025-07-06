#include <stdio.h>
int main() {

    char character;

    printf("Enter any Character: ");
    scanf(" %c", &character);

    switch(character){
        case 'a':
           printf("Its a Vowel Character");
           break;
        case 'e':
           printf("Its a Vowel Character");
           break;
        case 'i':
           printf("Its a Vowel Character");
           break;
        case 'o':
           printf("Its a Vowel Character");
           break;
        case 'u':
           printf("Its a Vowel Character");
           break;
        default:
           printf("Its not a Vowel Character");
           break;
    }
}