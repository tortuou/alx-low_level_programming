#include <stdio.h>
#include <stdlib.h>
/**
 * main - print program name
 * @argv: name of elements in stdout
 * @argc: number of elements in stdout
 *
 * Return: program name
 */
int  main(__attribute__((unused))int argc, char* argv[])
{
	printf("%s\n", argv[0]);
	exit (EXIT_SUCCESS);
}
