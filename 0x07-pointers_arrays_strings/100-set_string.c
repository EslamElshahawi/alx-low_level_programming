#include <stdio.h>
#include "main.h"

/**
 * set_string - sets the value of a pointer to char
 * @s: the pointer to set
 * @to: the string to be set to
 */

void set_string(char **s, char *to)
{

	*s = to;
}
