#include "main.h"

/**
 * Main - Print alphabet 10 times
 *
 * Return: 0 (Success)
 */

int print_alphabet_x10(void)
{
	int i, x;

	for (i = 0; i <= 9; i++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			putchar(x);
		}
	putchar('\n');
	}
	return (0);
}
