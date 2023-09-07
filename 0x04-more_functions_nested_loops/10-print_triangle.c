#include "main.h"
#include <stdio.h>
/**
 * print_triangle - function that prints a triangle
 * @size: size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, l;

	if (size > 0)
	{
		for (l = 1; l <= size; l++)
		{
			for (i = 0; i < (size - l); i++)
			{
				_putchar(' ');
			}
			for (j = 1; j <= l; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
