#include <stdio.h>

/**
 * main - prints all base 10 single digit numbers
 *
 * Return: 0
 */
int main(void)
{
	int digit;

	digit = 48;
	while (digit < 58)
	{
		putchar(digit);
		digit++;
	}
	putchar('\n');

	return (0);
}
