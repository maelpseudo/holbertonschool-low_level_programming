#include <stdio.h>
#include "main.h"

/**
 * _isdigit - a function that checks for a digit (0 through 9)
 * @c: input integer
 * Return: 1 if c is a digit, 0 if not
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
