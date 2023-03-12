#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - print the sum of two diagonals of a square matrix
 *
 * @a: the int matrix
 * @size: the size of the array
 */


void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[(size * i) + i];
		sum2 += a[(size * (i + 1)) - (i + 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
