#include "main.h"

/**
 * is_prime_helper - helper function to check if number is prime recursively
 * @n: the number to check
 * @i: the current divisor to test (starting from 2)
 *
 * Return: 1 if prime, 0 if not prime
 */
int is_prime_helper(int n, int i)
{
	/* If we've checked all possible divisors up to sqrt(n) */
	if (i * i > n)
	{
		return (1);  /* No divisors found, it's prime */
	}

	/* If n is divisible by i, it's not prime */
	if (n % i == 0)
	{
		return (0);
	}

	/* Check next divisor */
	return (is_prime_helper(n, i + 1));
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: the number to check
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);  /* 0, 1, and negative numbers are not prime */
	}

	if (n == 2)
	{
		return (1);  /* 2 is the smallest prime number */
	}

	/* Start checking divisors from 2 */
	return (is_prime_helper(n, 2));
}
