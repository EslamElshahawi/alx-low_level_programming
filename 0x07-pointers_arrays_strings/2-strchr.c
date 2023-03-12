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
	int a = *s;

	while(1)
	{
		if (a == c)
			return (s - 1);

		if (a == 0)
			return (NULL);
	
		a = *s++;
	}
}
