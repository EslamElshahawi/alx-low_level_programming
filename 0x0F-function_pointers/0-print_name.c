#include "function_pointers.h"

/**
 * print_name - prints a given name using a given function
 *
 * @name: ptr to str name
 * @f: function prints text
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
