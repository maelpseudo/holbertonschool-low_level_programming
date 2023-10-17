#include "main.h"

/**
 * print_alphabet_x10 - prints 10X alphabet
 *
 * return: no value
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
}
