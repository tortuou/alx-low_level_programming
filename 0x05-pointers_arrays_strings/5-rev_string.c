#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <string.h>
/**
 * rev_string- function that reverses a string.
 * @s: string
 */
void rev_string(char *s)
{
	int len, i = 0;
	char rev;

	len = strlen(s);
	while (i < (len / 2))
	{
		rev = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = rev;
		i++;
	}
}
