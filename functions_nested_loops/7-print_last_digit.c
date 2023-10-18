#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @n - input
 * Return: last digit of n
 */

int print_last_digit(int n)
{
	int lastDigit;
	lastDigit = n % 10;
	_putchar(lastDigit);
	return (lastDigit);
}	
