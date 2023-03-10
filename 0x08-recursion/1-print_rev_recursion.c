#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string
 *
 * Return: 0 on success, -1 on failure
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
