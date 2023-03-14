#include "main.h"
#include <stdlib.h>

/**
 * _strdup - makes a duplicate string
 *
 * @str: string to copy
 *
 * Return: a pointer to the new string or NULL if fails
 */

char *_strdup(char *str)
{
	char *dup;
	int i = 0;
	int len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	dup = malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);

	while ((dup[i] = str[i]) != '\0')
		i++;

	return (dup);
}
