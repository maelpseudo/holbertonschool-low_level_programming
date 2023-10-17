#include "main.h"
#include <stdio.h>

/**
 * print_sign - a function that prints the sign of a number
 *@n: input integer
 * Return: 1 if n > 0, 0 if n = 0 or -1 if n < 0
 */

int print_sign(int n)
{
	if (n > '0')
	{
		printf("+");
		return (1);
	}
	if (n == 0)
	{
		printf("0");
		return (0);
	}
	else
	{
		printf("-");
		return (-1);
	}
}
