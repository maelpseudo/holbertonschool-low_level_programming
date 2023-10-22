#include <stdio.h>
#include "main.h"

/**
 * print_square - a function that prints a square
 * @size: input integer
 * Return: void
 */

void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				putchar (35);
			}
			putchar ('\n');
		}
	}
	else
		putchar ('\n');
}
