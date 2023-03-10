#include "main.h"

/**
 * *_memcpy - copies the memory address of an array to another
 * @dest: destination memory area
 * @src: source memory
 * @n: number of bytes to copy
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
