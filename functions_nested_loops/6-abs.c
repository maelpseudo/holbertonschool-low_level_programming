#include "main.h"
#include <stdlib.h>

/**
 * _abs - a function that computes the absolute value of n
 *@n: input integer
 * Return: No return
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
	n = (n * (-1));
	return (n);
	}
	else
	{
	return (0);
	}
}
