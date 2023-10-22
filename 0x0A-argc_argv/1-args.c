#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the number of arguments
 * @argv: name of elements in stdout
 * @argc: number of elements in stdout
 *
 * Return: number of arguments
 */
int main(int argc, __attribute__((unused))char *argv[])
{
	printf("%d\n", argc - 1);
	exit(EXIT_SUCCESS);
}
