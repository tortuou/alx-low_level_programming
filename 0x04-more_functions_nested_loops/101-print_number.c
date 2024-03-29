#include "main.h"
#include <stdio.h>
/**
 *  print_number - prints an integer
 *  @n: integer number
 *
 *  Return: void
 */
void print_number(int n)
{
	int power;
	unsigned int number, num;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	power = 1;
	number = n;
	num = n;
	while (num >= 10)
	{
		num /= 10;
		power *= 10;
	}
	while (power >= 1)
	{
		_putchar((number / power) % 10 + '0');
		power /= 10;
	}
}
