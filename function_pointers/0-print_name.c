#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints a name using a function pointer
 * @name: the name to print
 * @f: pointer to the function to use
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
