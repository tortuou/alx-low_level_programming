#include <unistd.h>
/**
 * _putchar - write the character c to stdout
 * @c: the character to print
 *
 * Return: 1 0n success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
