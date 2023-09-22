#include "main.h"

/**
 * print_triangle - prints triangle of given size
 * @size: size of triangle to be printed
 */
void print_triangle(int size)
{
	int i, j;

	i = 0;
	if (size > 0)
	{
		while (i <  size)
		{
			j = i + 1;
			while (j < size)
			{
				_putchar(' ');
				j++;
			}
			j = 0;
			while (j < (i + 1))
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
	else
		_putchar('\n');
}
