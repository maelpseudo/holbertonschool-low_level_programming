#include <stdio.h>
#include "main.h"

/**
 * _isupper - Write a function that checks for uppercase character
 * @c : input integer
 * Return : 1 upper, 0 is not
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
