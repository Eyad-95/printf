#include "main.h"

/**
 * print_string - prints char
 * @str: character to be printed
 * Return: k, number of characters
 */
int print_string(const char *str)
{
	int k = 0;

	while (str[k] != '\0')
	{
		write(1, &str[k], 1);
		k++;
	}

	return (k);
}
