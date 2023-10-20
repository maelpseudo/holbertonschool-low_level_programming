#include <stdio.h>
#include "main.h"

/**
 * _isdigit - a function that checks for a digit
 * @c: input integer
 * return: 1 if it is a digit, 0 if not
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
