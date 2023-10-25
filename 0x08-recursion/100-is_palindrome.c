#include "main.h"
#include <stdio.h>
/**
 * length - returns the length of a string.
 * @s: string
 * Return: the length of a string.
 */
int length(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + length(s + 1));
}

/**
 * reverse - compares each character of the string.
 * @s: string
 * @a: smallest iterator.
 * @b: biggest iterator.
 * Return: .
 */
int reverse(char *s, int a, int b)
{
	if (*(s + a) == *(s + b))
	{
		if (a == b || a == b + 1)
			return (1);
		return (0 + reverse(s, a + 1, b - 1));
	}
	return (0);
}

/**
 * is_palindrome - detects if a string is a palindrome.
 * @s: string.
 * Return: 1 if s is a palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (reverse(s, 0, length(s) - 1));
}
