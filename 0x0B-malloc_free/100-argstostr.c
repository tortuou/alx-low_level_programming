#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr -  concatenates all the arguments of your program.
 * @ac: argc
 * @av: argv
 *
 * Return: all the arguments
 */
char *argstostr(int ac, char **av)
{
	char *ptr, *str;
	int i, j, t;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0, t = 0; i < ac; i++)
	{
		for (j = 0; *(*(av + i) + j) != '\0'; j++, t++)
			;
		t++;
	}
	t++;

	ptr = malloc(t * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	str = ptr;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*ptr = av[i][j];
			ptr++;
		}
		*ptr = '\n';
		ptr++;
	}
	return (str);
}
