#include "main.h"
#include <stdio.h>

/**
 * print_line - a function that draws a straight line in the terminal
 * @n: input integer
 * Return: void
 */

void print_line(int n)
{

	int i = 0;

	if (n == 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			putchar('_');
		}
		putchar('\n');
	}
}
