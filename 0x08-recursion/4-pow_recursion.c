#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: base number
 * @y: power number
 *
 * Return: pow_recursion
 */
int _pow_recursion(int x, int y)
{
	if (y >= 0)
		return (pow(x, y));
	else
		return (-1);
}
