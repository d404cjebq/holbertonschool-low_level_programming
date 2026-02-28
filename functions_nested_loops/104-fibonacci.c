#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int a_hi;
	unsigned long int a_lo;
	unsigned long int b_hi;
	unsigned long int b_lo;
	unsigned long int t_hi;
	unsigned long int t_lo;
	unsigned long int base;
	int i;

	base = 10000000000UL;
	a_hi = 0;
	a_lo = 1;
	b_hi = 0;
	b_lo = 2;
	i = 1;
	while (i <= 98)
	{
		if (a_hi > 0)
			printf("%lu%010lu", a_hi, a_lo);
		else
			printf("%lu", a_lo);
		if (i < 98)
			printf(", ");
		t_lo = a_lo + b_lo;
		t_hi = a_hi + b_hi + t_lo / base;
		t_lo = t_lo % base;
		a_hi = b_hi;
		a_lo = b_lo;
		b_hi = t_hi;
		b_lo = t_lo;
		i++;
	}
	printf("\n");
	return (0);
}
