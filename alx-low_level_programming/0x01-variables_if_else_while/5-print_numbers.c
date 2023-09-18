#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10
 *
 * Return: 0
 */
int main(void)
{
	char c;

	c = '0';
	while (c <= '9')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
