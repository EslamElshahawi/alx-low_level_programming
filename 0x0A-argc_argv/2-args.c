#include "main.h"
#include <stdio.h>

/**
 * main - print arguments passed to main
 *
 * @argc: argument count
 * @argv: argument array of strings
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
