#include "main.h"
#include <stdio.h>
/**
 * main - prints the largest prime factor
 *
 * Return:  largest prime factor
 */
int main(void)
{
	/*n is the number, i is iteration*/
	long int n, i;

	n = 612852475143;
	for(i = 2; i < n; i++)
	{
		while (n % i == 0)
		{
			n = n / i;
		}
	}
	printf("%lu\n", n);
	return (0);
}
