#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * swap_int- function that swaps the values of two integers.
 * @a: first int
 * @b: second int
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
