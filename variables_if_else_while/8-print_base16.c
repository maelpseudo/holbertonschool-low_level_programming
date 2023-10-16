#include <stdio.h>

/**
* main
*
* Return: 0 (Success)
*/

int main(void)
{

	int i, x;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}

	for (x = 'a'; x <= 'f'; x++)
	{
		putchar(x);
	}

putchar('\n');

return (0);
}
