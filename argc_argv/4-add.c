#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_positive_number - checks if a string contains only digits
 * @str: string to check
 *
 * Return: 1 if all characters are digits, 0 otherwise
 */
int is_positive_number(char *str)
{
	int i = 0;

	/* Check each character in the string */
	while (str[i] != '\0')
	{
		/* If character is not a digit, return 0 */
		if (!isdigit(str[i]))
		{
			return (0);
		}
		i++;
	}

	return (1);
}

/**
 * main - adds positive numbers
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	/* If no numbers passed, print 0 */
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	/* Loop through all arguments (skip program name) */
	for (i = 1; i < argc; i++)
	{
		/* Check if argument contains only digits */
		if (!is_positive_number(argv[i]))
		{
			printf("Error\n");
			return (1);
		}

		/* Convert to integer and add to sum */
		sum += atoi(argv[i]);
	}

	/* Print the result */
	printf("%d\n", sum);

	return (0);
}
