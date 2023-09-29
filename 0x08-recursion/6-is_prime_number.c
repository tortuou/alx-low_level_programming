#include "main.h"
#include <stdio.h>
int prime(int m, int i);
/**
 * is_prime_number - test for prime number
 * @n: number
 *
 * Return: 1 if the number is prime
 */
int is_prime_number(int n)
{
	return (prime(n, 2));
}
/**
 * prime - check for prime
 * @m: number
 * @i:iterator
 *
 * Return: 1 if prime, 0 otherwise
 */
int prime(int m, int i)
{
	if (m == 1 || m == -1)
		return (0);
	else if (i < m)
	{
		if (m % i == 0)
			return (0);
		else
			return (prime(m, i + 1));
	}
	else if (i > m)
	{
		if (m % i == 0)
			return (0);
		else 
			return (prime(m, i - 1));
	}
	return (1);
}
