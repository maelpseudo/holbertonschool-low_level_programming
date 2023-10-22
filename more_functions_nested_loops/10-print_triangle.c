#include "main.h"
#include <stdio.h>

/**
 * print_triangle - a function that prints a triangle
 * @size: input integer
 * Return: void
 */

void print_triangle(int size)
{
	int i, j, n;

	if (size > 0)
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= (size - i); j++)
			{
				putchar (' ');
			}
			for (n = 1; n <= i; n++)
			{
				putchar ('#');
			}
			putchar ('\n');
		}
	else
		putchar ('\n');
}
