#include "main.h"
#include <stdio.h>

/**
 * main - Fizz-Buzz test
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i != 100)
		{

		if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("FizzBuzz ");
		}
		else
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
		}
		else
		{
			printf("Buzz");
		}
	}
	putchar('\n');
	return (0);
}
