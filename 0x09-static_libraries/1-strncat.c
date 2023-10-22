#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: string
 * @src: string
 * @n: number of elements to concatenate in
 * Return: pointer to resulting `dest`
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, m;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (m = 0; src[m] != '\0' && n > 0; m++, n--, i++)
	{
		dest[i] = src[m];
	}
	return (dest);
}
