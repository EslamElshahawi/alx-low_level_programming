#include "main.h"
#include <stdio.h>

/**
 * atoi - converts string to integer
 *
 * @s: pointer to a char(string)
 *
 * Return: the int convert from string
 */

int atoi(char *s)
{
	int i = 0;
        int f = 0;
	int n = 0;
        int len = 0; 
	int d = 0;
	int digit = 0;

	while(s[len])
		len++;

	while(i < len && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';

			if (d % 2)
				digit = -digit;

			n = n * 10 + digit;
			f = 1;

			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}





/**
 * main - multiply two passed arguments
 *
 * @argc: number of arguments
 * @argv: the two numbers
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc > 3 || argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);
}
