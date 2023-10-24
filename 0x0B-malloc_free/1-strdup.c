#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - function that returns a pointer to string copy
 * @str: string
 *
 * Return: duplicate of the string str
 */
char *_strdup(char *str)
{
	char *ptr;
	unsigned int i, len;

	if (str == NULL)
		return (NULL);
	len = 1;
	while (str[len] != '\0')
	{
		len++;
	}
	ptr = malloc(sizeof(*ptr) * len);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}
