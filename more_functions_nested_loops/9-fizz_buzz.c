#include "main.h"
#include <stdio.h>

/**
 * main - Fizz-Buzz test
 *
 * Return: Always 0 (Success)
 */

int main()
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if ((i % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	return (0);
}
