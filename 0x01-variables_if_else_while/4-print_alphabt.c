#include <stdio.h>
/**
 * main -print alphabet except q,e
 *
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
		{
			putchar (c);
			c++;
		}
		else
		{
			continue;
		}
	}
	putchar ('\n');
	return (0);
}
