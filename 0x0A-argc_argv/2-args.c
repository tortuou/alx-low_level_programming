#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all arguments it receives
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: all arguments
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc >= 0)
	{
		for(i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	exit(EXIT_SUCCESS);
}
