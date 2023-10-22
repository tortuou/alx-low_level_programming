#include "main.h"

/**
 * _strpbrk - Search a string for any of a set of bytes.
 * @s: string
 * @accept: string to match
 * Return: Pointer to the byte in `s` that matches one of the bytes in `accept`
 * or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	int i, n;
	char *ptr;

	i = 0;
	while (s[i] != '\0')
	{
		n = 0;
		while (accept[n] != '\0')
		{
			if (accept[n] == s[i])
			{
				ptr = &s[i];
				return (ptr);
			}
			n++;
		}
		i++;
	}

	return (0);
}
