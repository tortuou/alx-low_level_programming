#include "main.h"
#include <stdlib.h>

/**
 * _strstr - locate a substring
 * @haystack: string
 * @needle: string substring
 * Return: Pointer to beginning of substring, or NULL if not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, n, m;

	i = 0;
	m = 0;
	while (haystack[i] != '\0')
	{
		n = 0;
		while (needle[n + m] != '\0' && haystack[i + m] != '\0'
		       && needle[n + m] == haystack[i + m])
		{
			if (haystack[i + m] != needle[n + m])
				break;
			m++;
		}
		if (needle[n + m] == '\0')
			return (&haystack[i]);
		n++;
		i++;
	}

	return (NULL);
}
