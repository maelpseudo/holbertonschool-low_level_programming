#include "main.h"

/**
 * Main - Write a function that checks for alphabetic character.
 * @c: input letter
 * Return 1 if letter, 0 if not
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
