#include "main.h"
#include <stdio.h>
/**
 * print_times_table -  prints the n times table
 * @n: number
 *
 * Return: void
 */
void print_times_table(int n)
{
	int result, m, j;

	if (n >= 0 && n < 15)
	{
		for (m = 0; m <= n; m++)
		{
			for (j = 0; j <= n; j++)
			{
				result = m * j;
				if (result <= 9)
				{
					if (j != 0)
					{
						printf(",   ");
					}
					printf("%d", result);
				}
				else if (result <= 99)
				{
					printf(",  %d", result);
				}
				else
				{
					printf(", %d", result);
				}
			}
			printf("\n");
		}
	}
}
