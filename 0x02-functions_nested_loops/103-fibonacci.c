#include "main.h"
#include <stdio.h>
/**
 * main - prints the sum of the even-valued Fibonacci sequence
 *
 * Return: sum of the even-valued  Fibonacci sequence
 */
int main(void)
{
	unsigned long int p, f, sum;

	p = 1;
	f = 2;
	sum = 0;
	while (f < 4000000)
	{
		f += p;
		p = f - p;
		if (f % 2 == 0)
		{
			sum += f;
		}
	}
	printf("%lu\n", sum);
	return (0);
}
