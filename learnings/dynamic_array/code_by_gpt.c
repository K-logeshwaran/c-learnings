#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *arr;       // Pointer to the array
    int capacity;   // Current capacity of the array
    int size;       // Current number of elements in the array
} DynamicArray;

// Initialize a dynamic array
DynamicArray* initDynamicArray() {
    DynamicArray *da = malloc(sizeof(DynamicArray));
    if (da == NULL) {
        printf("Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }
    da->arr = malloc(sizeof(int) * 2); // Initial capacity of 2
    if (da->arr == NULL) {
        printf("Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }
    da->capacity = 2;
    da->size = 0;
    return da;
}

// Insert an element into the dynamic array
void insert(DynamicArray *da, int value) {
    if (da->size == da->capacity) {
        // Resize the array if it's full
        da->capacity *= 2;
        da->arr = realloc(da->arr, sizeof(int) * da->capacity);
        if (da->arr == NULL) {
            printf("Memory reallocation failed.\n");
            exit(EXIT_FAILURE);
        }
    }
    da->arr[da->size++] = value;
}

// Print the elements of the dynamic array
void printDynamicArray(DynamicArray *da) {
    printf("Dynamic Array: ");
    for (int i = 0; i < da->size; i++) {
        printf("%d ", da->arr[i]);
    }
    printf("\n");
}

// Free memory allocated for the dynamic array
void freeDynamicArray(DynamicArray *da) {
    free(da->arr);
    free(da);
}

int main() {
    // Create and initialize a dynamic array
    DynamicArray *da = initDynamicArray();

    // Insert elements into the dynamic array
    for (int i = 1; i <= 10; i++) {
        insert(da, i);
    }

    // Print the dynamic array
    printDynamicArray(da);

    // Free memory allocated for the dynamic array
    freeDynamicArray(da);

    return 0;
}
