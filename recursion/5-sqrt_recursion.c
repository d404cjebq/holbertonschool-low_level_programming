#include "main.h"

/**
 * _sqrt_helper - helper function to find square root recursively
 * @n: the number to find square root for
 * @i: the current guess (starting from 0)
 *
 * Return: natural square root of n, or -1 if not found
 */
int _sqrt_helper(int n, int i)
{
	if (i * i > n)
	{
		return (-1);  /* No natural square root found */
	}

	if (i * i == n)
	{
		return (i);   /* Found the square root */
	}

	return (_sqrt_helper(n, i + 1));  /* Try next number */
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find square root for
 *
 * Return: natural square root of n, or -1 if n is negative or has no root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);  /* Error: negative number */
	}

	return (_sqrt_helper(n, 0));
}
