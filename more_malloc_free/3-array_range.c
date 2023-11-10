#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - function that creates an array of integers
 * @min: input integer
 * @max: input integer
 * Return: result
 */

int *array_range(int min, int max)
{
int i;

if (min > max)
{
return (NULL);
}

int array_size;

array_size = max - min + 1;

int *result;

result = malloc(array_size * sizeof(int));

if (result == NULL)
{
return (NULL);
}

for (i = 0; i < array_size; i++)
{
result[i] = min + i;
}

return (result);
}
