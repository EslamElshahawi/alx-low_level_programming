#include "function_pointers.h"

/**
 * print_name - takes the name and a function that prints text and should use function to print name
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
