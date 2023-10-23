#include "main.h"
#include <stdio.h>

/**
 * swap_int - function to swap 2 integers
 * @a: input integer
 * @b: input integer
 * Return: void
*/
void swap_int(int *a, int *b)
{
int n, i;

n = *a;
i = *b;

*a = i;
*b = n;
}