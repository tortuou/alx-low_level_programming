#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _isalpha - checks for alphabetic character.
 * @c:  is a letter, lowercase or uppercase
 *
 * Return: 1 if c is a letter, lowercase or uppercase & 0 otherwise
 */
int _isalpha(int c)
{
	if (isalpha(c) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
