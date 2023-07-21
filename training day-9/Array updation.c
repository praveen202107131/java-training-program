#include <stdio.h>

int main() {
    int size, updateIndex, newValue;

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

    // Ask the user for the index and new value to update
    printf("Enter the index of the element you want to update: ");
    scanf("%d", &updateIndex);

    if (updateIndex < 0 || updateIndex >= size) {
        printf("Invalid index! The index should be between 0 and %d.\n", size - 1);
        return 1;
    }

    printf("Enter the new value: ");
    scanf("%d", &newValue);

    // Update the element at the specified index
    array[updateIndex] = newValue;

    // Print the updated array
    printf("Updated Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
