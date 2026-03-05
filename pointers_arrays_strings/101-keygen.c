#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates a valid password for 101-crackme
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	int sum;
	int c;

	srand(time(NULL));
	sum = 0;

	for (i = 0; i < 26; i++)
	{
		c = (rand() % 26) + 97;
		sum += c;
		printf("%c", c);
	}

	printf("%c\n", 2772 - sum);
	return (0);
}
