#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int a;
	unsigned long int b;
	unsigned long int temp;
	int i;

	a = 1;
	b = 2;
	i = 1;
	while (i <= 98)
	{
		if (i < 98)
			printf("%lu, ", a);
		else
			printf("%lu", a);
		temp = a + b;
		a = b;
		b = temp;
		i++;
	}
	printf("\n");
	return (0);
}
