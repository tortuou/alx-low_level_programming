#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: arguments count
 * @argv: arguments value
 *
 * Return: multiple of two numbers
 */
int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
	}
	return (1);
}
