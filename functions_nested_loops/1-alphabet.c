#include "main.h"

/**
 * Main - Print alphabet in lowercase
 *
 * Return: 0 (Success)
 */

int print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
