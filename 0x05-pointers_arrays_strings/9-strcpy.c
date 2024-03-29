#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copies the string
 * @dest: pointer to buffer where it copied
 * @src: pointer to where string exist
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
