#include "main.h"

/**
* print_uint - prints char
* @n: character to be printed
*/
void print_uint(unsigned int n)
{
char h, A[10];
int i, j, k, p, flag2 = 0;
char r, temp;

if (n < 10)
h = (char)n + '0';
else
{
i = 0;
while (n != 0)
{
r = n % 10;
A[i++] = r + '0';
n /= 10;
}
for (k = 0, p = i - 1; k < i / 2; k++, p--)
{   temp = A[p];
A[p] = A[k];
A[k] = temp;
}
flag2 = 1;
}
if (flag2 == 1)
{
	for (j = 0; j < i; j++)
		write(1, &A[j], 1);
} else
write(1, &h, 1);
}
