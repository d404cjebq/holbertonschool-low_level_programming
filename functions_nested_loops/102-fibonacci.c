#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	long int a;
	long int b;
	long int temp;

	a = 1;
	b = 2;
	i = 1;
	while (i <= 50)
	{
		if (i < 50)
			printf("%ld, ", a);
		else
			printf("%ld", a);
		temp = a + b;
		a = b;
		b = temp;
		i++;
	}
	printf("\n");
	return (0);
}
