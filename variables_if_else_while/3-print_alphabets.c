#include <stdio.h>

/**
* main - Entery point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int x;
	int y;

	for (x = 'a' ; x <= 'z' ; x++)
	{
		putchar(x);
	}
	putchar('\n');
	for (y = 'A' ; y <= 'Z' ; y++)
        {
                putchar(y);
        }
        putchar('\n');
	return (0);
}
