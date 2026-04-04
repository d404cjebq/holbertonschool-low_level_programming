#include "main.h"
#include <stdlib.h>
#include <unistd.h>

/**
 * is_valid - checks if string contains only digits
 * @s: the string to check
 *
 * Return: 1 if valid, 0 if not
 */
static int is_valid(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
	}
	return (i > 0);
}

/**
 * str_len - returns length of a string
 * @s: the string
 *
 * Return: length of the string
 */
static int str_len(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 * mul - multiplies two number strings and prints result
 * @n1: first number string
 * @n2: second number string
 *
 * Return: void
 */
static void mul(char *n1, char *n2)
{
	int len1;
	int len2;
	int *result;
	int i;
	int j;
	int start;
	char c;

	len1 = str_len(n1);
	len2 = str_len(n2);
	result = malloc(sizeof(int) * (len1 + len2));
	if (result == NULL)
		exit(98);
	for (i = 0; i < len1 + len2; i++)
		result[i] = 0;
	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			result[i + j + 1] += (n1[i] - '0') * (n2[j] - '0');
			result[i + j] += result[i + j + 1] / 10;
			result[i + j + 1] %= 10;
		}
	}
	start = 0;
	while (start < len1 + len2 - 1 && result[start] == 0)
		start++;
	for (i = start; i < len1 + len2; i++)
	{
		c = '0' + result[i];
		write(1, &c, 1);
	}
	c = '\n';
	write(1, &c, 1);
	free(result);
}

/**
 * main - multiplies two positive numbers
 * @ac: argument count
 * @av: argument vector
 *
 * Return: 0 on success, 98 on error
 */
int main(int ac, char **av)
{
	if (ac != 3)
	{
		write(1, "Error\n", 6);
		exit(98);
	}
	if (!is_valid(av[1]) || !is_valid(av[2]))
	{
		write(1, "Error\n", 6);
		exit(98);
	}
	mul(av[1], av[2]);
	exit(0);
}
