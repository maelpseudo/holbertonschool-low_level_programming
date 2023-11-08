#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - function that creates an array of chars, and initializes it with a specific char
 * @size: input integer
 * @c: char to an integer
 * Return: 0 (Success)
*/

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *arr;

if (size == 0)
{
return NULL;
}

arr = (char *)malloc(size * sizeof(char));

if (arr == NULL)
{
return (NULL);
}

for (i = 0; i < size; i++)
{
arr[i] = c;
}

return (arr);
}
