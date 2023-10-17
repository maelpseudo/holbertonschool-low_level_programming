#include "main.h"

int print_alphabet_x10(void)
{
	int i, x;

	for (i = 0; i <= 10; i++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			putchar(x);
		}
	putchar('\n');
	}
	return (0);
}
