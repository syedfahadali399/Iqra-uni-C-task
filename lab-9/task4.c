#include <stdio.h>
#include <string.h>
int main() {
    // char sentence[100];
    // int i;

    // printf("type anything do you want: ");
    // scanf("%s ", sentence);

    // strrev(sentence);

    // printf("Reverse order is %s", sentence);

    char sentence[100];
    int len, i;

    printf("Type anything you want: ");
    fgets(sentence, sizeof(sentence), stdin);

    len = strlen(sentence);
    if (sentence[len - 1] == '\n') {
        sentence[len - 1] = '\0';
        len--;
    }

    for (i = 0; i < len / 2; i++) {
        char temp = sentence[i];
        sentence[i] = sentence[len - 1 - i];
        sentence[len - 1 - i] = temp;
    }

    printf("Reverse order is: %s\n", sentence);
}