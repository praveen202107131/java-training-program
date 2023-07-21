#include <stdio.h>

int main() {
    int size, insertIndex, newValue;

    // Ask the user for the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("Invalid array size! Please enter a positive number.\n");
        return 1;
    }

    int array[size];

    // Take input elements from the user
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    // Ask the user for the index and value to be inserted
    printf("Enter the index at which you want to insert: ");
    scanf("%d", &insertIndex);

    if (insertIndex < 0 || insertIndex > size) {
        printf("Invalid index! The index should be between 0 and %d.\n", size);
        return 1;
    }

    printf("Enter the value to insert: ");
    scanf("%d", &newValue);

    // Shift elements to make room for the new element
    for (int i = size - 1; i >= insertIndex; i--) {
        array[i + 1] = array[i];
    }

    // Insert the new element
    array[insertIndex] = newValue;
    size++; // Increment the size after insertion

    // Print the updated array
    printf("Updated Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
