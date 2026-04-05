#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - performs simple operations using function pointers
 * @ac: argument count
 * @av: argument vector
 *
 * Return: 0 on success
 */
int main(int ac, char **av)
{
	int (*f)(int, int);
	int a;
	int b;

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	f = get_op_func(av[2]);
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(av[1]);
	b = atoi(av[3]);
	if ((av[2][0] == '/' || av[2][0] == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", f(a, b));
	return (0);
}
