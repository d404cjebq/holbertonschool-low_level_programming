#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer to the string
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_palindrome - helper function to check if string is palindrome
 * @s: pointer to the string
 * @start: starting index
 * @end: ending index
 *
 * Return: 1 if palindrome, 0 if not
 */
int check_palindrome(char *s, int start, int end)
{
	/* If we've checked all characters */
	if (start >= end)
	{
		return (1);  /* It's a palindrome */
	}

	/* If characters at start and end don't match */
	if (s[start] != s[end])
	{
		return (0);  /* Not a palindrome */
	}

	/* Check next pair of characters */
	return (check_palindrome(s, start + 1, end - 1));
}

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: pointer to the string to check
 *
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int len;

	/* Get the length of the string */
	len = _strlen_recursion(s);

	if (len <= 1)
	{
		return (1);  /* Empty string or single character is palindrome */
	}

	/* Check from both ends */
	return (check_palindrome(s, 0, len - 1));
}
