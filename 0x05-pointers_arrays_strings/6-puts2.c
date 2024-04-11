#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <string.h>
/**
 * puts2-  function that prints every other character of a string
 * @str: string
 */
void puts2(char *str)
{
	int len, i = 0;

	len = strlen(str);
	while (len > i)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
