#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - prints the minimum number of coins to make money change
 * @argc: no. amounts
 * @argv: value of amounts
 *
 * Return: minimum number of coins
 */
int main(int argc, char *argv[])
{
	int cents[] = {25, 10, 5, 2, 1};
	int i = 1, j = 0, n = 0;
	int amount;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		amount = atoi(argv[i]);
		while (amount > 0 && j <= 4)
		{
			if (amount >= cents[j])
			{
				amount -= cents[j];
				n++;
			}
			else
			{
				j++;
			}
		}
	}
	return (printf("%d\n", n), 0);
}
