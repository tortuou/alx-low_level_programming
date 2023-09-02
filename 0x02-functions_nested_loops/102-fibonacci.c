#include "main.h"
#include <stdio.h>
/**
 * main -  prints the first 50 Fibonacci numbers
 *
 * Return: first 50 Fibonacci numbers
 */
int main(void)
{
	int i, p, f;

	p = 1;
	f = 2;
	printf("%d", p);
	for (i = 0; i < 50; i++)
	{
		printf(", %d", f);
		f += p;
		p = f;
	}
	printf("\n");
	return (0);
}
