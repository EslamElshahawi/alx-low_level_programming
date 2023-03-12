#include "main.h"
#include <stdio.h>

/**
 * *_strchr - locates a character in a string
 *
 * @s: string to search
 * @c: char to find
 *
 * Return: pointer to first occurance of c or Null if not found
 */

char *_strchr(char *s, char c)
{
	while(1)
	{
		if (*s == c)
			return (s);

		if (*s == 0)
			return (NULL);
	
		*s++;
	}
}
