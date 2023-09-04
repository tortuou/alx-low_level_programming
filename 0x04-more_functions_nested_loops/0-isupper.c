#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _isupper -  checks for uppercase character.
 * @c: character
 *
 * Return: 1 if it is uppercase
 */
int _isupper(int c)
{
	if (isupper(c) != 0)
		return (1);
	else
		return (0);
}
