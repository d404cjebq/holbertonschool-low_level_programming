#include "main.h"
#include <stdlib.h>

/**
 * count_words - counts words in a string separated by spaces
 * @str: the string
 *
 * Return: number of words
 */
static int count_words(char *str)
{
	int count;
	int i;
	int in_word;

	count = 0;
	in_word = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (str[i] == ' ')
			in_word = 0;
	}
	return (count);
}

/**
 * strtow - splits a string into words
 * @str: the string to split
 *
 * Return: pointer to array of strings, or NULL on failure
 */
char **strtow(char *str)
{
	char **arr;
	int words;
	int i;
	int j;
	int k;
	int len;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = count_words(str);
	if (words == 0)
		return (NULL);

	arr = malloc(sizeof(char *) * (words + 1));
	if (arr == NULL)
		return (NULL);

	i = 0;
	k = 0;
	while (k < words)
	{
		while (str[i] == ' ')
			i++;
		len = 0;
		while (str[i + len] != '\0' && str[i + len] != ' ')
			len++;
		arr[k] = malloc(sizeof(char) * (len + 1));
		if (arr[k] == NULL)
		{
			while (k--)
				free(arr[k]);
			free(arr);
			return (NULL);
		}
		for (j = 0; j < len; j++)
			arr[k][j] = str[i + j];
		arr[k][len] = '\0';
		i += len;
		k++;
	}
	arr[words] = NULL;

	return (arr);
}
