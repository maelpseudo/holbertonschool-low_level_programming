#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * 
 * 
 * 
*/

char *create_array(unsigned int size, char c)
{
int i;

if (size == 0) {
return NULL;
}

char *arr = (char *)malloc(size * sizeof(char));

if (arr == NULL) {
return NULL;
}

for (i = 0; i < size; i++) {
arr[i] = c;
}

return arr;
}
