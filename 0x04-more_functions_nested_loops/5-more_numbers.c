#include "main.h"
#include <stdio.h>
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: void
 */
void more_numbers(void)
{
	int i, j, f1, f2;

	for (j = 0; j <= 9; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			f1 = i / 10;
			f2 = i % 10;
			if (i > 9)
			{
				_putchar(f1 + '0');
			}
			_putchar(f2 + '0');
		}
		_putchar('\n');
	}
}

