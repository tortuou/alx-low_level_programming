#include "main.h"
#include <stdio.h>
#include <math.h>
int square_root(int m, int i);
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number
 *
 * Return: natural square root of a number.
 */
int _sqrt_recursion(int n)
{
	return (square_root(n, 1));
}
/**
 * square_root - square root of a number
 * @m: number
 * @i: iterator
 *
 * Return: square root
 */
int square_root(int m, int i)
{
	int square_i = i * i;

	if (square_i < m)
		return (square_root(m, i + 1));
	else if (square_i == m)
		return (i);
	else
		return (-1);
}
