#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments of the program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: pointer to the new string, or NULL on failure
 */
char *argstostr(int ac, char **av)
{
	char *str;
	unsigned int total;
	unsigned int i;
	unsigned int j;
	unsigned int k;

	if (ac == 0 || av == NULL)
		return (NULL);

	total = 0;
	for (i = 0; i < (unsigned int)ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			total++;
		total++;
	}

	str = malloc(sizeof(char) * (total + 1));
	if (str == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < (unsigned int)ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			str[k++] = av[i][j];
		str[k++] = '\n';
	}
	str[k] = '\0';

	return (str);
}
