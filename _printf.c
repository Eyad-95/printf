#include "main.h"

/**
 * _printf - Entry point
 * @format: character to be
 * Return: Always 0
 */

int _printf(const char *format, ...)
{
	int n = 0, strc = 0;
	int i;
	va_list args;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
				write(1, "%", 1);
			else if (format[i + 1] == 'c')
			{	char c = va_arg(args, int);

				print_char(c);
			} else if (format[i + 1] == 's')
			{	const char *str = va_arg(args, const char *);
				strc = print_string(str);
			} else if (format[i + 1] == 'd' || format[i + 1] == 'i')
			{	int n = va_arg(args, int);
				print_int(n);
			} else if (format[i + 1] == 'u')
			{	unsigned int n = va_arg(args, unsigned int);
				print_uint(n);

			}
		i++;
		}
		else
			write(1, &format[i], 1);
		n++;
}

	va_end(args);

	return (n + strc);
}
