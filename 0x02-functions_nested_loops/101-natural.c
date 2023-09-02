#include "main.h"
#include <stdio.h>
/**
 * sum_of_multiples - print sum of 3 & 5 multiples
 *
 * Return: sum of multiples
 */
int sum_of_multiples(void)
{
	int i, sum;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i %  5 == 0))
		{
			sum += i
		}
	}
	return (sum);
}
