#include "main.h"

/*
 * _puts_recursion - puts a string by recursion and ends with a new line
 *
 * @s: string input
 *
 * Return: 0 on success , -1 on failure
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s+1);
}
