#include "main.h"

/**
 * factorial - returns the factorial of a given number using recursion
 * @n: the number to calculate factorial for
 *
 * Return: factorial of n, or -1 if n is negative (error)
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);  /* Error: negative number */
	}

	if (n == 0)
	{
		return (1);   /* Base case: factorial of 0 is 1 */
	}

	return (n * factorial(n - 1));
}
