#include "main.h"

/**
* print_octal - prints char
* @n: character to be printed
*/
void print_octal(unsigned int n)
{
	char A[100];
	int i, j, k, p;
	char r, temp;

	i = 0;

	while (n != 0)
	{
		r = n % 8;
		A[i++] = r + '0';
		n /= 8;
	}

	for (j = 0, k = i - 1; j < i / 2; j++, k--)
	{
		temp = A[j];
		A[j] = A[k];
		A[k] = temp;
	}

	for (p = 0; p < i; p++)
	{
		write(1, &A[p], 1);
	}
}
