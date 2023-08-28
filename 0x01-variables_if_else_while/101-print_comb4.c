#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits
 *
 * Return: 0
 */
int main(void)
{
	int n, m, v;

	for (n = '0'; n <= '7'; n++)
	{
		for (m = '1'; m <= '8'; m++)
		{
			for (v = '2'; v <= '9'; v++)
			{
				if ((m > n) & (v > m))
				{
					putchar(n);
					putchar(m);
					putchar(v);
					if (n != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
