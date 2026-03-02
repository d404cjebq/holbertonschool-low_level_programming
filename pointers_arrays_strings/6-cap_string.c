#include "main.h"

/**
 * is_separator - Checks if a character is a word separator
 * @c: Character to check
 *
 * Return: 1 if it's a separator, 0 otherwise
 */
int is_separator(char c)
{
	char separators[] = " \t\n,;.!?\"(){}";
	int i;

	for (i = 0; separators[i] != '\0'; i++)
	{
		if (c == separators[i])
			return (1);
	}
	return (0);
}

/**
 * cap_string - Capitalizes all words of a string
 * @str: Pointer to the string to modify
 *
 * Return: Pointer to the modified string
 */
char *cap_string(char *str)
{
	int i = 0;

	/* Capitalize first character if it's a letter */
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] = str[i] - 32;

	i++;

	/* Loop through the rest of the string */
	while (str[i] != '\0')
	{
		/* Check if current character is a word separator */
		if (is_separator(str[i]))
		{
			/* Check if next character is a lowercase letter */
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] = str[i + 1] - 32;
			}
		}
		i++;
	}

	return (str);
}
