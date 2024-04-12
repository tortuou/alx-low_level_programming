#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <string.h>
/**
 * puts_half-  function that prints half of a string
 * @str: string
 */
void puts_half(char *str)
{
	int len, halflen;

	len = strlen(str);
	if (len / 2 == 0)
		halflen = len / 2;
	else
		halflen = (len - 1) / 2;
	while (halflen < len)
	{
		++halflen;
		_putchar(str[halflen]);
	}
	_putchar('\n');
}
