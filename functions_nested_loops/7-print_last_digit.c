#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - print the last digit of a number
 * @n : input integer
 * Return: last digit of n
 */

int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = n % 10;

	if (lastDigit < 0)
	{
		lastDigit = (lastDigit * (-1));
	}

	_putchar('0' + lastDigit);
	return (lastDigit);
}
