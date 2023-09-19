#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: number's sign to be printed
 * Return: 1 if n is +ve, -1 if n is -ve and 0 if n is 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
