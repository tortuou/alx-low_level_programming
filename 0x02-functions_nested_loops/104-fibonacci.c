#include "main.h"
#include <stdio.h>
/**
 * main -  prints the first 98 Fibonacci numbers
 *
 * Return: first 98 Fibonacci numbers
 */
int main(void)
{
	unsigned long int f, p, i;

	p = 1;
	f = 2;
	printf("%lu", p);
	for (i = 0; i < 97; i++)
	{
		printf(", %lu", f);
		f += p;
		p = f - p;
	}
	printf("\n");
	return (0);
}
