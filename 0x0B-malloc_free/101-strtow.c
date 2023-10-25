#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * strtow - splits a string into words.
 * @str: string
 *
 * Return: words
 */
char **strtow(char *str)
{
	int i, j, k = 0, l, m, count = 0, len;
	char **word;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			count++;
	if (count == 0)
		return (NULL);
	word = malloc((count + 1) * sizeof(char *));
	if (word == NULL)
	{
		free(word);
		return (NULL);
	}
	for (i = 0; str[i] != '\0' &&  k < count; i++)
	{
		if (str[i] != ' ')
		{
			len = 0;
			for (j = i; str[j] != ' ' && str[j] != '\0'; j++)
				len++;
			word[k] = malloc((len + 1) * sizeof(char));
			if (word[k] == NULL)
			{
				for (m = 0; m < k; m++)
					free(word[k]);
				free(word);
				return (NULL);
			}
			for (l = 0; l < len; l++, i++)
				word[k][l] = str[i];
			word[k][l] = '\0', k++;
		}
	}
	word[k] = NULL;
	return (word);
}
