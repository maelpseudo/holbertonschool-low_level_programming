#include <stdio.h>
#include <string.h>
#include "function_pointers.h"

/**
 * 
 * 
 * 
*/

int int_index(int *array, int size, int (*cmp)(int))
{
if (size <= 0)
{
return (-1);
} 
for (int i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
{
return (i);
}
}
return (-1);
}

int is_even(int num)
{
return (num % 2 == 0 ? 1 : 0);
}
