#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int i;
	ssize_t p, ptr;
	char *str;

	if (!filename)
		return (0);

	i = open(filename, O_RDONLY);

	if (i == -1)
		return (0);

	str = malloc(sizeof(char) * (letters));
	if (!str)
		return (0);

	p = read(i, str, letters);
	ptr = write(STDOUT_FILENO, str, p);

	close(i);

	free(str);

	return (ptr);
}
