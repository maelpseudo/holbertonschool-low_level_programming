#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - function that prints all natural numbers from n to 98
 * @n : input integer
 * result : input
 */

void print_to_98(int n)
{	
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i < 98)
			{
			printf(", ");
			}
		}
		printf("\n");
	}
	else
	{
		printf("111, 110, 109, 108, 107, 106, 105, 104, 103, 102, 101, 100, 99, 98\n");
	}
}
