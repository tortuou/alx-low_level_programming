#include "main.h"
#include <stdio.h>
/**
 * print_binary - prints the binary of a number.
 * @n: unsigned long int.
 *
 * Return: no return.
 */
void print_binary(unsigned long int n)
{
	unsigned long int j;
	int i;

	if (n == 0)
	{
		printf("0");
		return;
	}
	j = n;
	i = 0;
	while ((j >>= 1) > 0)
		i++;
	while (i >= 0)
	{
		if ((n >> i) & 1)
			printf("1");
		else
			printf("0");
		i--;
	}
}
