#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <string.h>
/**
 * print_array-  function that prints n elements of an arra
 * @a: the array
 * @n: the number of elements of the array
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < (n - 1))
	{
		printf("%d, ", a[i]);
		i++;
	}
	if (i == (n - 1))
		printf("%d\n", a[i]);
}
