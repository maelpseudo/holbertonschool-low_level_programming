#include <stdio.h>

/**
* main - write a program that prints all the numbers of base 16 in lowercase
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
