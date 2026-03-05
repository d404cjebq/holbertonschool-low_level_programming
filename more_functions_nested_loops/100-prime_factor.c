#include <stdio.h>
#include <math.h>

/**
 * main - finds the largest prime factor of 612852475143
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	double n = 612852475143.0;
	double largest = -1;
	double i;

	while (fmod(n, 2) == 0)
	{
		largest = 2;
		n /= 2;
	}

	for (i = 3; i <= sqrt(n); i += 2)
	{
		while (fmod(n, i) == 0)
		{
			largest = i;
			n /= i;
		}
	}

	if (n > 1)
		largest = n;

	printf("%.0f\n", largest);
	return (0);
}
