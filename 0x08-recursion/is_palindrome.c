#include "main.h"
#include <string.h>
#include <stdio.h>
int palindrome(char *str, int i, int j);
/**
 * is_palindrome - check for palindrome
 * @s: string
 *
 * Return: 1 if a string is a palindrome
 */
int is_palindrome(char *s)
{
	int n = strlen(s);

	if (n == 0)
		return (1);
	else
		return (palindrome(s, 0, n - 1));
}
/**
 * palindrome - palindrome recrusion
 * @str: string
 * i: start len
 * j: end len
 *
 * Return: 1 for palindrome
 */
int palindrome(char *str, int i, int j)
{
	char string[j] = str;
	if (i == j)
		return (1);
	else if (string[i] != string[j])
		return (0);
	else if (i < (j + 1))
		return (palindrome(str, i + 1, j - 1));
	return (1);
}
