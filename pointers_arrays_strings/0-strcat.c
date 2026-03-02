#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string (must have enough space)
 * @src: source string
 *
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	/* move to end of dest */
	while (dest[i] != '\0')
	{
		i++;
	}

	/* copy src to dest */
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* add null terminator */
	dest[i] = '\0';

	return (dest);
}
