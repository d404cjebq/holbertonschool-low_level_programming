#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to a pointer to char (double pointer)
 * @to: pointer to char to set the value to
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
