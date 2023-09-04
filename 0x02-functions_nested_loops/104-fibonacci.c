#include "main.h"
#include <stdio.h>
/**
 * main -  prints the first 98 Fibonacci numbers
 *
 * Return: first 98 Fibonacci numbers
 */
int main(void)
{
	unsigned long int f, p, i, l, f1, f2, p1, p2;

	l = 1000000000;
	p = 1;
	f = 2;
	printf("%lu", p);
	for (i = 0; i < 90; i++)
	{
		printf(", %lu", f);
		f += p;
		p = f - p;
	}
	f1 = f / l;
	f2 = f % l;
	p1 = p / l;
	p2 = p % l;
	for (i = 90; i < 97; i++)
	{
		printf(", %lu%lu", f1 + (f2 / l), (f2 % l));
		f1 += p1;
		f2 += p2;
		p1 = f1 - p1;
		p2 = f2 - p2;
	}

	printf("\n");
	return (0);
}
