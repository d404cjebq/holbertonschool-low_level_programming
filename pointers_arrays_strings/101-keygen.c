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
	int last;
	int c;

	srand(time(NULL));
	sum = 0;

	for (i = 0; i < 6; i++)
	{
		c = (rand() % 30) + 40;
		sum += c;
		printf("%c", c);
	}

	last = 2772 - sum;
	while (last > 126 || last < 33)
	{
		sum = 0;
		for (i = 0; i < 6; i++)
		{
			c = (rand() % 30) + 40;
			sum += c;
			printf("%c", c);
		}
		last = 2772 - sum;
	}
	printf("%c\n", last);
	return (0);
}
