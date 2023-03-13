#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array with a dynamic size
 *
 * @size: the size of the array
 * @c: a char to intilize the array with
 *
 * Return: NULL if fails a pointer if succeds
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	if (!size)
		return (NULL);

	p = (char *) malloc(sizeof(char) * size);

	if (p == NULL)
		return (0);

	while (i < size)
	{
		*(p + i) = c;
		i++;
	}
	*(p + i) = '\0';

	return (p);
}
