#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - locates the first occurance of a byte in another string
 * @s: string to search in
 * @accept: bytes to search for
 *
 * Return: pointer to s if found an occurance and NULL if not
 */

char *_strpbrk(char *s, char *accept)
{
	int x, i;

	for (i = 0; *s != '\0'; i++)
	{
		for (x = 0; accept[x] != '\0'; x++)
		{
			if (*s == accept[x])
				return (s);
		}
		s++;
	}

	return (NULL);
}
