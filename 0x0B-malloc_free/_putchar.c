#include <unistd.h>
/**
 * _putchar - print character
 * @c: character
 *
 * Return: 1
 */
int _putchar(c)
{
	return (write(1, &c, 1));
}
