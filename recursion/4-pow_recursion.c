#include "main.h"
#include <stdio.h>
#include <string.h>
#include <math.h>

/**
 * 
 * 
 * 
 * 
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x *  _pow_recursion(x, (y - 1)));
}
