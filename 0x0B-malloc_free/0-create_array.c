#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - function that creates an array of chars
 * @size: size of array
 * @c: chars
 *
 * Return: array of chars
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(sizeof(*ptr) * size);
	if (ptr == NULL)
		return (NULL);
	if (size != 0)
	{
		for (i = 0; i < size; i++)
			ptr[i] = c;
		return (ptr);
	}
	else
		return (NULL);
}
