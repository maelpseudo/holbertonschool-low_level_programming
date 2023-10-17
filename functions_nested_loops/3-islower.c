#include "main.h"

/**
 * Main - write a function that checks for lowercase character
 *
 * Return: 0 (Success)
 */

int _islower(int c)
{
	if(islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
