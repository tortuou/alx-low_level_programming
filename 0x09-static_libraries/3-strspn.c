#include "main.h"

/**
 * _strspn - search a string for a set of bytes
 * @s: char string array
 * @accept: char array to check bytes with
 * Return: Number of bytes in the intial segment of `s`
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int m;
	int n;

	i = 0;
	n = 0;

	while (s[i] != '\0')
	{
		m = 0;
		while (accept[m] != '\0')
		{
			if (s[i] == accept[m])
			{
				n++;
				break;
			}
			m++;
		}
		if (accept[m] == '\0')
			break;
		i++;
	}
	return (n);
}
