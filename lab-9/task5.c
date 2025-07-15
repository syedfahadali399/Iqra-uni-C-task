#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char sentence[200], word[50], longest[50];
    int i = 0, j = 0, maxLength = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    int len = strlen(sentence);
    if (sentence[len - 1] == '\n') {
        sentence[len - 1] = '\0';
    }

    while (1) {
        char ch = sentence[i];

        if (ch != ' ' && ch != '\0') {
            word[j++] = ch; // Build current word
        } else {
            word[j] = '\0'; // End current word

            if (j > maxLength) {
                maxLength = j;
                strcpy(longest, word); // Save as longest word
            }

            j = 0; // Reset for next word
        }

        if (ch == '\0') break;
        i++;
    }

    printf("Longest word: %s\n", longest);

    return 0;
}
