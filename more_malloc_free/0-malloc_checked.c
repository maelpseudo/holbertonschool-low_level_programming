#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: unsigned int
 * Return: ptr
*/

void *malloc_checked(unsigned int b) {
    void *ptr = malloc(b);
    if (ptr == NULL) {
        fprintf(stderr, "Memory allocation failed. Exiting...\n");
        exit(98);
    }
    return ptr;
}
