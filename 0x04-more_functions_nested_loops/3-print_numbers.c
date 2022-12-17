#include "main.h"
#include "_putchar.c "

/**
 * print_numbers - prints the numbers from 0 to 9
 *
 * Return: numbers
 */

void print_numbers(void)
{
	int num;

	for (num = 0 ; num < 10 ; num++)
	{
		_putchar(num+'0');
	}
	_putchar('\n');
}
