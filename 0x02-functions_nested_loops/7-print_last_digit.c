#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_last_digit - prints the last digit of a number.
 * @n: number
 *
 * Return: last digit of a number.
 */
int print_last_digit(int n)
{
	int last_digit = abs(n) % 10;

	_putchar(last_digit + '0');
	return (last_digit);
}
