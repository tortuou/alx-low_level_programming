#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - Do not print 2 and 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2)
			continue;
		else if (i == 4)
			continue;
		else
			_putchar(i + '0');
	}
	_putchar('\n');
}
