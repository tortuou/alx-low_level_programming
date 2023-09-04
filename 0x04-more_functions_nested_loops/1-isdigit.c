#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _isdigit - checks for a digit
 * @c: parameter
 *
 * Return: 1 if c is a digit
 */
int _isdigit(int c)
{
	if (isdigit(c) != 0)
		return (1);
	else
		return (0);
}
