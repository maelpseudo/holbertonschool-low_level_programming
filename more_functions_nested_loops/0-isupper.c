#include <stdio.h>

/**
 * _isupper - Write a function that checks for uppercase character
 * @c : entry integer
 * Result : 1 if upper 0 if not
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
