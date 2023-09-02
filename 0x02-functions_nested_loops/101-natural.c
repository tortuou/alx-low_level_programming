#include "main.h"
#include <stdio.h>
/**
 * main - print sum of 3 & 5 multiples
 *
 * Return: sum of multiples
 */
int main(void)
{
	int i, sum;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i %  5 == 0))
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
