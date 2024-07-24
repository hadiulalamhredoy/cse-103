#include <stdio.h>

// Function to find the maximum value in an array
int findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// Function to find the minimum value in an array
int findMin(int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

// Function to find the mode in an array
int findMode(int arr[], int size) {
    int maxCount = 0, mode = -1;

    for (int i = 0; i < size; i++) {
        int count = 1;

        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count > maxCount) {
            maxCount = count;
            mode = arr[i];
        }
    }

    return mode;
}

int main() {
    int size;

    // Get the size of the array from the user
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Check for a valid array size
    if (size <= 0) {
        printf("Invalid array size. Exiting the program.\n");
        return 1;
    }

    // Declare an array of the specified size
    int arr[size];

    // Get the elements of the array from the user
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Call the findMax, findMin, and findMode functions
    int max = findMax(arr, size);
    int min = findMin(arr, size);
    int mode = findMode(arr, size);

    // Display the results
    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);
    printf("Mode: %d\n", mode);

    return 0;
}

