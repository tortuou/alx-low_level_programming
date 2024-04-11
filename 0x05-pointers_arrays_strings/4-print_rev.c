#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <string.h>
/**
 * print_rev- function that prints a string, in reverse, followed by a new line.
 * @s: a string
 */
void print_rev(char *s)
{
	int len;

	len = strlen(s);
	while (len > 0)
	{
		_putchar(s[len - 1]);
		len--;
	}
	_putchar('\n');
}
