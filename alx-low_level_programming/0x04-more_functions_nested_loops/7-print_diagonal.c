#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: length of diagonal
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		i = 0;

		while (i < n)
		{
			j = i;

			while (j > 0)
			{
				_putchar(' ');
				j--;
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
	else
		_putchar('\n');
}
