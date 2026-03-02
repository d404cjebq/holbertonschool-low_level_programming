#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase
 * @str: Pointer to the string to modify
 *
 * Return: Pointer to the modified string
 */
char *string_toupper(char *str)
{
	int i = 0;

	/* Loop through each character of the string */
	while (str[i] != '\0')
	{
		/* Check if the character is a lowercase letter */
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			/* Convert to uppercase by subtracting 32 */
			str[i] = str[i] - 32;
		}
		i++;
	}

	return (str);
}
