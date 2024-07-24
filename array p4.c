#include <stdio.h>

// Function to search for an element in an array
int searchElement(int arr[], int size, int element) {
    // Search for the element in the array
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            // Element found, return its index
            return i;
        }
    }

    // Element not found, return -1
    return -1;
}

int main() {
    int size, element;

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

    // Get the element to search from the user
    printf("Enter the element to search: ");
    scanf("%d", &element);

    // Call the searchElement function to search for the specified element in the array
    int index = searchElement(arr, size, element);

    // Display the result
    if (index != -1) {
        printf("Element %d found at index %d.\n", element, index);
    } else {
        printf("Element %d not found in the array.\n", element);
    }

    return 0;
}
