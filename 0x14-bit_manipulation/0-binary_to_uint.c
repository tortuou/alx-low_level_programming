#include "main.h"

/**
 * binary_to_uint - converts a binary to integer
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int inte;
	int l, base;

	if (!b)
		return (0);

	inte = 0;
	l = 0;

	while (b[l] != '\0')
		l++;
	for (l--, base = 1; l >= 0; l--, base *= 2)
	{
		if (b[l] != '0' && b[l] != '1')
		{
			return (0);
		}

		if (b[l] & 1)
		{
			inte += base;
		}
	}

	return (inte);
}
