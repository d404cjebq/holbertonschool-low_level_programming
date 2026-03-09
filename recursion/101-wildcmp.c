#include "main.h"

/**
 * wildcmp - compares two strings with wildcard *
 * @s1: first string
 * @s2: second string (can contain *)
 *
 * Return: 1 if identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	/* If both strings are at the end, they match */
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	/* If s2 has * and next char is \0, * can match remaining s1 */
	if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
		return (0);

	/* If current char of s2 is '*', handle the wildcard */
	if (*s2 == '*')
	{
		/* Try to match * with empty string, or with one char from s1 */
		if (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)))
			return (1);
	}

	/* If characters match, move both pointers forward */
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	/* If no match and no wildcard, return 0 */
	return (0);
}
