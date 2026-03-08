#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer to the string to search
 * @accept: pointer to the string containing bytes to search for
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 *         or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		i = 0;

		/* Check if current character exists in accept */
		while (accept[i])
		{
			if (*s == accept[i])
				return (s);
			i++;
		}

		s++;
	}

	/* No matching character found */
	return (0);  /* or NULL after including stddef.h */
}
