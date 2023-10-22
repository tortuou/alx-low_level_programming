#include "main.h"
#include <unistd.h>
/**
 * _putchar - write characters to stdout
 * @c: character
 *
 * Return: character
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
