#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: input string
 *
 * Return: converted integer
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int result = 0;

	/* handle signs */
	while (s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}

	/* convert digits */
	while (s[i] >= '0' && s[i] <= '9')
	{
		int digit = s[i] - '0';

		if (sign == 1)
			result = result * 10 + digit;
		else
			result = result * 10 - digit;

		i++;
	}

	return (result);
}
