#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: pointer to the string to search in
 * @needle: pointer to the substring to search for
 *
 * Return: pointer to the beginning of the located substring,
 *         or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *h;
	char *n;

	/* If needle is empty, return haystack */
	if (*needle == '\0')
		return (haystack);

	while (*haystack)
	{
		h = haystack;
		n = needle;

		/* Check if needle matches starting at current haystack position */
		while (*n && *h && *h == *n)
		{
			h++;
			n++;
		}

		/* If we reached the end of needle, we found a match */
		if (*n == '\0')
			return (haystack);

		haystack++;
	}

	/* No match found */
	return (0);  /* or NULL after including stddef.h */
}
