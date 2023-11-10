#include <stdio.h>
#include <stdlib.h>

/**
 * 
 * 
 * 
 * 
*/

int *array_range(int min, int max) {
    if (min > max) {
        return NULL; // Return NULL if min is greater than max
    }

    int array_size = max - min + 1; // Calculate the size of the array

    int *result = malloc(array_size * sizeof(int)); // Allocate memory for the array

    if (result == NULL) {
        return NULL; // Return NULL if malloc fails
    }

    for (int i = 0; i < array_size; i++) {
        result[i] = min + i; // Fill the array with values from min to max
    }

    return result;
}
