#include <stdio.h>
#include <string.h>

// Function to search for a substring within a string
int searchString(char mainString[], char subString[]) {
    int mainLen = strlen(mainString);
    int subLen = strlen(subString);

    // Iterate through the main string
    for (int i = 0; i <= mainLen - subLen; i++) {
        int j;

        // Check for a match starting from the current position in the main string
        for (j = 0; j < subLen; j++) {
            if (mainString[i + j] != subString[j]) {
                break; // Mismatch, move to the next position in the main string
            }
        }

        // If the inner loop completed without a break, a match is found
        if (j == subLen) {
            return i; // Return the starting index of the substring in the main string
        }
    }

    return -1; // Return -1 if the substring is not found
}

int main() {
    char mainString[100], subString[50];

    // Get the main string from the user
    printf("Enter the main string: ");
    fgets(mainString, sizeof(mainString), stdin);

    // Remove the newline character from the end of the main string
    mainString[strcspn(mainString, "\n")] = '\0';

    // Get the substring to search from the user
    printf("Enter the substring to search: ");
    fgets(subString, sizeof(subString), stdin);

    // Remove the newline character from the end of the substring
    subString[strcspn(subString, "\n")] = '\0';

    // Call the searchString function to search for the substring
    int index = searchString(mainString, subString);

    // Display the result
    if (index != -1) {
        printf("Substring found at index %d in the main string.\n", index);
    } else {
        printf("Substring not found in the main string.\n");
    }

    return 0;
}

