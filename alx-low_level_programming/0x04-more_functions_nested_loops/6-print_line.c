#include "main.h"

/**
 * print_line - draws a straight line on the terminal
 * @n: number of times _ will be printed
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		i = 0;

		while (i < n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
