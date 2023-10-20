#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal
 * @n: input integer
 * return: void
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
		for (i = 0; i < n; i++)
		{
			j = 0;
			while (j < i)
			{
				putchar (' ');
				j++;
			}
			putchar ('\\');
			putchar ('\n');
		}
	else
		putchar ('\n');
}
