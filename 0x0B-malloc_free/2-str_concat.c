#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: contents of s1, followed by the contents of s2
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	unsigned int n = 0, m = 0, c, f;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[n] != '\0')
	{
		n++;
	}
	while (s2[m] != '\0')
	{
		m++;
	}
	str = malloc((n * sizeof(*s1)) + (m * sizeof(*s2)) + 1);
	if (str == NULL)
		return (NULL);
	for (c = 0, f = 0; c < (n + m + 1); c++)
	{
		if (c < n)
			str[c] = s1[c];
		else
			str[c] = s2[f++];
	}
	return (str);
}
