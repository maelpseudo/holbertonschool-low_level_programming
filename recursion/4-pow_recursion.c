#include "main.h"
#include <stdio.h>
#include <string.h>
#include <math.h>

/**
 * find_sqrt - function that checks the number's square
 * @x: integer input
 * @y: integer input
 * Return: The square of a, otherwise -1
 */
int find_sqrt(int x, int y)
{
if (y * y == x)
{
return (y);
}
else if (y * y > x)
{
return (-1);
}
return (find_sqrt(x, y + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input integer
 * Return: natural square of n otherwise -1
 */

int _sqrt_recursion(int n)
{
return (find_sqrt(n, 1));
}