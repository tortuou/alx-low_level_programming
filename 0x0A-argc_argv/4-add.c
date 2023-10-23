#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - program that adds positive numbers
 * @argc: count arguments
 * @argv: arguments values
 *
 * Return: sum of positive numbers
 */
int main(int argc, char *argv[])
{
	char *ptr;
	int i = 1, sum = 0;

	if (argc > 1)
	{
		while (i < argc)
		{
			if (!strtol(argv[i], &ptr, 10))
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[i]);
			i++;
		}
	}
	printf("%d\n", sum);
	return (0);
}
