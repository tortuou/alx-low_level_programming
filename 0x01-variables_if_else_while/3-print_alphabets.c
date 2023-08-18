#include <stdio.h>
/**
 * main -print alphabet in lower and upper cases
 *
 * Return: 0
 */
int main(void)
{
	char c, C;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (C = 'A'; C <= 'Z'; C++)
		putchar(C);
	putchar('\n');
	return (0);
}
