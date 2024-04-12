#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <string.h>
/**
 * *_strcpy- function that copies the string src to buffer dest
 * @dest: buffer
 * @src: string
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	return (strcpy(dest, src));
}
