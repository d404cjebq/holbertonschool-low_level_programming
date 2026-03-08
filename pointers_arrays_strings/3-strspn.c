#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to the string to search
 * @accept: pointer to the string containing accepted characters
 *
 * Return: number of bytes in the initial segment of s
 *         which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i;
	int found;

	while (*s)
	{
		found = 0;
		i = 0;

		/* Check if current character exists in accept */
		while (accept[i])
		{
			if (*s == accept[i])
			{
				found = 1;
				break;
			}
			i++;
		}

		/* If character not found in accept, stop counting */
		if (!found)
			break;

		count++;
		s++;
	}

	return (count);
}
