#include "main.h"
#include <ctype.h>
#include <stdio.h>
/**
 * _islower - checks for lowercase character.
 * @c: the character to check
 *
 * Return: 1 if c is lowercase &  0 otherwise
 */
int _islower(int c)
{
	if (islower(c) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
