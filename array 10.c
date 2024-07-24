#include <stdio.h>
#include <string.h>

#define MAX_SIZE 1000

// Function to count words and characters in a text
void countWordsAndCharacters(char text[]) {
    int words = 0, characters = 0;

    // Iterate through each character in the text
    for (int i = 0; text[i] != '\0'; i++) {
        // Increment character count for each non-space character
        if (text[i] != ' ' && text[i] != '\t' && text[i] != '\n') {
            characters++;
        }

        // Check for the end of a word (space, tab, or newline)
        if (text[i] == ' ' || text[i] == '\t' || text[i] == '\n') {
            words++;
        }
    }

    // Increment word count for the last word (if any)
    if (characters > 0) {
        words++;
    }

    // Display the results
    printf("Number of words: %d\n", words);
    printf("Number of characters: %d\n", characters);
}

int main() {
    char text[MAX_SIZE];

    // Get the text from the user
    printf("Enter the text (max %d characters):\n", MAX_SIZE - 1);
    fgets(text, MAX_SIZE, stdin);

    // Call the countWordsAndCharacters function to count words and characters
    countWordsAndCharacters(text);

    return 0;
}

