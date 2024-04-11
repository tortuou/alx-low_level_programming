#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <string.h>
/**
 * _strlen- function that returns the length of a string.
 * @s: an string
 * Return: the length of a string.
 */
int _strlen(char *s)
{
	int len;

	len = strlen(s);
	return (len);
}
