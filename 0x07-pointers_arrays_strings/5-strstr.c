#include "main.h"
#include <stdio.h>

/**
 * *_strstr - searches for a substring needle in another haystack
 * @needle: substring to search for
 * @haystack: string to search in
 *
 * Return: a pointer to the location of the substring or NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (!needle[j])
			return (&haystack[i]);
	}
	return (NULL);
}
