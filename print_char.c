#include "main.h"

/**
 * print_char - prints char
 * @c: character to be printed
 */
void print_char(char c)
{
	write(1, &c, 1);
}
