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
		if (c != 'q' || c != 'e')
		{
			c++;
		}
		else
		{
			continue;
		}
	}
	putchar (c);
	putchar ('\n');
	return (0);
}
