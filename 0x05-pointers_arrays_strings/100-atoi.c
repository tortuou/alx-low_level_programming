#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
/**
 * _atoi- function that convert a string to an integer.
 * @s: string
 * Return: integer
 */
int _atoi(char *s)
{
	int i, len, j = 0, sign = 1, res;
	char *temp;

	len = strlen(s);
	temp = (char *)malloc(len + 1);
	for (i = 0; i < len; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			temp[j] = s[i];
			j++;
			if (s[i + 1] >= '0' && s[i + 1] <= '9')
				continue;
			else
				break;
		}
		else if (s[i] == '-')
		{
			sign *= -1;
		}
		else
			continue;
	}
	res = atoi(temp);
	return (res * sign);
}
