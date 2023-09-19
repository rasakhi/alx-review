#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: number
 * Return: last digit of n
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	if (last_digit > 0)
	{
		_putchar('0' + last_digit);
		return (last_digit);
	}
	else
	{
		last_digit *= -1;
		_putchar('0' + last_digit);
		return (last_digit);
	}
}
