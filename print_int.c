#include "main.h"

/**
 * print_int - prints char
 * @n: character to be printed
 */
void print_int(int n)
{
	char h, tc, oc;
	int t, o;

	if (n > 0)
	{
		if (n < 10)
		{
			h = (char)n + '0';
			write(1, &h, 1);
		}
		else
		{
			if (n >= 10 && n <= 99)
			{
				t = n / 10;
				o = n % 10;
				tc = (char)t + '0';
				oc = (char)o + '0';
				write(1, &tc, 1);
				write(1, &oc, 1);
			}
		}
	}
}
