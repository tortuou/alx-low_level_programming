#include "main.h"
#include <stdio.h>
/**
 * main -  prints _putchar
 *
 * Return: 0
 */
int main(void)
{
	char c[] =  "_putchar";
	int i = 0;

	while (i <= 8)
	{
		putchar(c[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
